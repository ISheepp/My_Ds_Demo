//暴力法 O(n^2)
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> v(2);
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums.at(i) + nums.at(j) == target)
            {
                v.at(0) = i;
                v.at(1) = j;
                return v;
            }
        }
    }
    return v;
}
int main(){
    int b[] = {1, 2, 3, 4, 5};
    vector<int> a(b,b+5);
    int target = 4;
    vector<int> c = twoSum(a, target);
    for(int i = 0; i < c.size(); i++){
        cout << c[i] << ",";
    }
}
