#include <cassert>
#include <iostream>
using namespace std;
int main()
{
    const int NUM_ROWS = 30,
              NUM_COLUMNS = 20;
    //使用typedef声明一个通用的函数(便于声明)
    typedef double TwoDimArray[NUM_ROWS][NUM_COLUMNS];
    TwoDimArray scoresTable;
    int numStudents, numTests;
    cout << "# students and # of tests? ";
    cin >> numStudents >> numTests;

    cout <<"Enter" << numTests << " test scores for student\n";
    for(int r = 0; r < numStudents; r++) //外循环控制行
    {
        cout << '#' << r+1 << ':';
        for(int c = 0; c <numTests; c++) //内循环控制列
        cin >> scoresTable[r][c]; 
    } 
}
