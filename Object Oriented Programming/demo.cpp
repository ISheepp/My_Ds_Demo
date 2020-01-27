#include <iostream>
#include "demo.hpp"
/*
#include< >引用的是编译器的类库路径里面的头文件。
#include“ ”引用的是你程序目录的相对路径中的头文件
*/
using namespace std;
int main(){
    demo demo1;
    //设置长度
    demo1.setLength(6.0);
    cout << "Length = " << demo1.getLength() << endl;
    //不使用成员函数设置长度
    demo1.length = 10.0;
    cout << "Length = " << demo1.length << endl;
    return 0;
}