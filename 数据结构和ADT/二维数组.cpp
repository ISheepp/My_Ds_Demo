#include <cassert>
#include <iostream>
using namespace std;
int main()
{
    const int NUM_ROWS = 30,
              NUM_COLUMNS = 20;
    //ʹ��typedef����һ��ͨ�õĺ���(��������)
    typedef double TwoDimArray[NUM_ROWS][NUM_COLUMNS];
    TwoDimArray scoresTable;
    int numStudents, numTests;
    cout << "# students and # of tests? ";
    cin >> numStudents >> numTests;

    cout <<"Enter" << numTests << " test scores for student\n";
    for(int r = 0; r < numStudents; r++) //��ѭ��������
    {
        cout << '#' << r+1 << ':';
        for(int c = 0; c <numTests; c++) //��ѭ��������
        cin >> scoresTable[r][c]; 
    } 
}
