/*
阅读程序并回答问题
1.函数f完成什么功能
2.分析函数f的算法复杂度是什么
3.给出程序的输出结果
*/
#include <iostream>
#include <vector>
using namespace std;
void f(const vector<int> &a, const vector<int> &b){
    vector<int> result;
    int i, j, t = 0;
    for(i = 0; i < a.size(); i++){
        bool flag = true;
        for(j = 0; j < b.size(); j++)
            if(a[i] == b[j]){flag = false;break;}
        if(flag)
            result.push_back(a[i]);
    }
    for(i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;
}
int main(){
    int ax[] = {19, 28, 37, 46, 55, 64, 73, 12, 9, 1};
    int bx[] = {46, 3, 7, 19, 89, 72, 12};
    vector<int> a(ax, ax+10), b(bx,bx+7);
    f(a, b);
    return 0;
}

/*
push_back 在数组的最后添加一个数据
pop_back 去掉数组的最后一个数据
函数功能为去掉ax数组中和bx数组相同的数
时间复杂度为O(n2)
*/