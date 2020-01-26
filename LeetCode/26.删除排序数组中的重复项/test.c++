#include <iostream>
#include <vector>
using namespace std;
//给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
int removeDuplicates(vector<int> &nums)
{
    int length = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                // nums.erase(i);
                length--;
            }
        }
    }
    return length;
}
//第二种
int remove(vector<int> &nums)
{
    if (nums.size() == 0)
        return 0;
    int i = 0;
    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
//test
int main()
{
    int a[] = {1, 1, 2, 2, 3, 5, 5, 4, 6};
    vector<int> b(a, a + 9);
    cout << removeDuplicates(b) << endl;
    removeDuplicates(b);
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << ",";
    }
}