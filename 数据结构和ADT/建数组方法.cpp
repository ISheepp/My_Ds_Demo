#include <cassert>
#include <iostream>
using namespace std;
const int CAPACITY = 10;
typedef int IntArray[CAPACITY]; // ����ʹ��typedef ������һ��ͨ�õĺ���
void read(IntArray theArray, int capacity, int numValues)
{
    assert(numValues >= 0 && numValues <= capacity);

    for(int i = 0; i < numValues; i++)
        cin >> theArray[i];
}

const int NUM_ROWS = 30,
          NUM_COLUMNS = 20;
typedef double TwoDimArray[NUM_ROWS][NUM_COLUMNS]; //ʹ��typedef����һ��ͨ�õĺ���
TwoDimArray scoresTable;
int main()
{
    IntArray a;
    read(a, CAPACITY, 5);
    
}
