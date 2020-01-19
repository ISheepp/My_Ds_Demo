#include <iostream>
using namespace std;

static int Queen[8] = {0};
static int Count = 0;
/*
遍历八皇后的各种摆放情况并打印
*/
void print()
{
    int outer, inner;
    for (outer = 0; outer < 8; outer++)
    {
        for (inner = 0; inner < Queen[outer]; inner++)
            cout << "0 ";
        
        cout << "1 ";

        for (inner = Queen[outer] + 1; inner < 8; inner++)
            cout << "0 ";
        cout << "\n";
    }
    cout << "==================" << endl;
}
/*
判断皇后的位置是否正确
*/
int is_true(int loop, int value)
{
    int index, data;
    for (index = 0; index < loop; index++)
    {
        data = Queen[index];
        if (data == value)
        {
            return 0;
        }
        if ((index + data) == (loop + value))
        {
            return 0;
        }
        if ((index - data) == (loop - value))
        {
            return 0;
        }
    }
    return 1;
}
/*
对皇后进行计算
---------待学习
*/
void eight_queue(int index)
{
    int loop;
    //这里是用来构造八个皇后
    for (loop = 0; loop < 8; loop++)
    {
        //用来判断第index个皇后在loop位置是否可行
        if (is_true(index, loop))
        {
            //如果可行就将结构记录在这个全局数组中
            Queen[index] = loop;
            if (7 == index)
            {
                //打印并将全局变量增加一次
                Count++;
                print();
                //将index这个皇后清空，方便下一次遍历
                Queen[index] = 0;
                return;
            }
            //这里使用了递归
            eight_queue(index + 1);
            //这里是回溯的思想,方便下一次遍历
            Queen[index] = 0;
        }
    }
}

int main()
{
    eight_queue(0);
    cout << "total = " << Count << endl;
    return 1;
}