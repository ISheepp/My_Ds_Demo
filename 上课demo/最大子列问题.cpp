#include <iostream>
using namespace std;
//1.算出所有情况  时间复杂度O(n³)
int MaxSubswqSum1(int A[], int N)
{
    int ThisSum, MaxSum = 0;
    int i, j, k;
    for (i = 0; i < N; i++)
    {
        for (j = i; j < N; j++)
        {
            ThisSum = 0;
            for (k = i; k <= j; k++)
                ThisSum += A[k];
            if (ThisSum > MaxSum)
                MaxSum = ThisSum;
        }
    }
    return MaxSum;
}

//2. 计算下一子列和的时候不从头开始累加，只是从上一个子列和加上一个新元素
//时间复杂度O(n²)
int MaxSubswqSum2(int A[], int N)
{
    int ThisSum, MaxSum = 0;
    int i, j;
    for (i = 0; i < N; i++)
    {
        ThisSum = 0;
        for (j = i; j < N; j++)
        {
            ThisSum += A[j];
            //对于相同的i，不同的j，只要在j-1次循环的基础上累加1项即可
            if (ThisSum > MaxSum)
                MaxSum = ThisSum;
        }
    }
    return MaxSum;
}
//3.分治算法  时间复杂度O(n log n)
int Max3(int A, int B, int C)
{
    return (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
}
/* 分解成更小规模求解*/
int DivideAndConquer(int a[], int left, int right)
{

    /*递归结束条件，子列只有一个数字*/
    if (left == right)
    {
        if (0 < a[left])
            return a[left];
        return 0;
    }

    /* 分别找到左右最大子列和*/
    int center = (left + right) / 2;
    int MaxLeftSum = DivideAndConquer(a, left, center);
    int MaxRightSum = DivideAndConquer(a, center + 1, right);

    /* 再分别找左右跨界最大子列和*/
    int MaxLeftBorderSum = 0;
    int LeftBorderSum = 0;
    for (int i = center; i >= left; i--)
    {
        LeftBorderSum += a[i];
        if (MaxLeftBorderSum < LeftBorderSum)
            MaxLeftBorderSum = LeftBorderSum;
    }
    int MaXRightBorderSum = 0;
    int RightBorderSum = 0;
    for (int i = center + 1; i <= right; i++)
    {
        RightBorderSum += a[i];
        if (MaXRightBorderSum < RightBorderSum)
            MaXRightBorderSum = RightBorderSum;
    }

    /*最后返回分解的左边最大子列和，右边最大子列和，和跨界最大子列和三者中最大的数*/
    return Max3(MaxLeftSum, MaxRightSum, MaXRightBorderSum + MaxLeftBorderSum);
}
int MaxSubseqSum4(int n, int a[])
{
    return DivideAndConquer(a, 0, n - 1);
}

//4.在线处理算法 时间复杂度O(n)
/*在线是指每输入一个数据就能进行即时处理，
在任何一个地方中止输入，算法都能给出当前的解*/
int MaxSubswqSum4(int A[], int N)
{
    int ThisSum, MaxSum = 0;
    int i;
    ThisSum = MaxSum = 0;
    for (i = 0; i < N; i++)
    {
        ThisSum += A[i]; //向右累加
        if (ThisSum > MaxSum)
            MaxSum = ThisSum; //发现更大的和则更新当前结果
        else if (ThisSum < 0) //如果当前子列和为负
            ThisSum = 0;      //则不可能使后面的部分和增大，抛弃之
    }
    return MaxSum;
}

int main()
{
    int sum[] = {1, 8, 3, 4, 5};
    cout << MaxSubswqSum4(sum, 5);
}