#include <iostream>
using namespace std;
int hannuota(int n,string a,string b,string c)
{
    if(n==1)
    {
        //只有一个盘子的情况下直接将第一个塔上的盘子移动到第三个塔
        printf("%s------>%s\n",a.c_str(),c.c_str());
    }
    else{
        //1.先将第一个塔的n-1个盘子全部通过第三个塔移动到第二个塔上
        hannuota(n-1,a, c, b);
        //2.再将剩下的一个盘子移动到第三个塔上
        printf("%s------>%s\n",a.c_str(),c.c_str());
        //3.最后将第二个塔上的盘子通过第一个塔移动到第三个塔上
        hannuota(n-1, b, a, c);
    }
    return 1;
}
int main(int argc, const char * argv[]) {
    printf("请输入盘子的数量:\n");
    int n;
    scanf("%d",&n);
    printf("盘子移动如下:\n");
    hannuota(n,"A","B","C");
    return 0;
}
