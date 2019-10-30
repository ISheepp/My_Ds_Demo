#include <cassert>
#include <iostream>
using namespace std;
const int CAPACITY = 10;
typedef int IntArray[CAPACITY]; // 尽量使用typedef 来声明一个通用的函数
void read(IntArray theArray, int capacity, int numValues)
{
    assert(numValues >= 0 && numValues <= capacity);

    for(int i = 0; i < numValues; i++)
        cin >> theArray[i];
}

const int NUM_ROWS = 30,
          NUM_COLUMNS = 20;
typedef double TwoDimArray[NUM_ROWS][NUM_COLUMNS]; //使用typedef声明一个通用的函数
TwoDimArray scoresTable;
int main()
{
    IntArray a;
    read(a, CAPACITY, 5);
    
}
