#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> test{1, 2, 3};
    test.push_back(4); //在vector末尾插入一个元素
    for (int i = 0; i < test.size(); i++)
    {
        cout << test[i] << ",";
    }
    cout << endl;
    vector<string> words{"first", "second"};
    // Inserts string(5,'A') as 2nd element
    auto iter = words.emplace(++begin(words), 5, 'A');
    //Inserts string ("$$$$") as 3rd element
    words.emplace(++iter, "$$$$");
    auto iter1 = words.insert(++std::begin(words), "two");
    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << ",";
    }
}