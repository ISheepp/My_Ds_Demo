#include <iostream>
#include <vector>
using namespace std;
/*
暴力法,时间复杂度O(n^2)
通过双重循环逐项取值，计算面积值并进行比对，保留最大面积
*/
int maxArea(vector<int> &height)
{
    int maxarea = 0;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int iHeight = min(height.at(i), height.at(j));
            if (iHeight * (j - i) > maxarea)
                maxarea = iHeight * (j - i);
        }
    }
    return maxarea;
}
/*双“指针”法
这种解法利用的是本题的特性，即在左右两边中，决定水桶盛水量的是较短的一边。
因此，可以考虑如下情况，左右两边左高右低，此时要将一边向内移动，
只能选择短的一边，因为即使长的变得更长，也只能带来面积的减少。时间复杂度O(n)。
*/
int maxArea(vector<int> &height)
{
    int iMaxArea = 0, iLeft = 0, iRight = height.size() - 1;
    while (iLeft < iRight)
    {
        int iHeight = min(height.at(iLeft), height.at(iRight));
        if (iHeight * (iRight - iLeft) > iMaxArea)
            iMaxArea = iHeight * (iRight - iLeft);
        if (height.at(iLeft) < height.at(iRight))
            iLeft++;
        else
            iRight--;
        //移动过程中一直保留了最大值
    }
    return iMaxArea;
}
//测试
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    vector<int> b(a, a + 5);
    cout << maxArea(b);
}