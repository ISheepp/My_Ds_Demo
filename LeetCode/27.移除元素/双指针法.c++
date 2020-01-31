#include <iostream>
#include <vector>
using namespace std;
//因为题目说不需要额外数组空间，直接覆盖即可
int removeElement(vector<int> &nums, int val)
{
    int begin = 0, end = nums.size() - 1;
    while (begin <= end)
    {
        if (nums[begin] == val && nums[end] != val)
        {
            nums[begin] = nums[end];
            begin++;
            end--;
        }
        else if (nums[begin] != val && nums[end] == val)
        {
            begin++;
            end--;
        }
        else if (nums[begin] == val && nums[end] == val)
        {
            end--;
        }
        else
        {
            begin++;
        }
    }
    return begin;
}
int main()
{
    int a[] = {3, 2, 2, 3};
    vector<int> b(a, a + 4);
    int length = removeElement(b, 3);
    for (int i = 0; i < length; i++)
    {
        cout << b[i] << ",";
    }
}