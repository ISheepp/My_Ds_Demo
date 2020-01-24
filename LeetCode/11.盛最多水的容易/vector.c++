#include <iostream>
#include <vector>
using namespace std;
//暴力法,时间复杂度O(n^2)
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
//测试
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    vector<int> b(a, a + 5);
    cout << maxArea(b);
}