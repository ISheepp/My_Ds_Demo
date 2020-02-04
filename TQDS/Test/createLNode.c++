#include <iostream>
using namespace std;
//阶乘
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode;
void createListR(LNode *&head)
{
    head = (LNode*)malloc(sizeof(LNode));
    head->next = NULL;
    int n;//结点数
    cout << "输入结点数：";
    cin >> n;
    LNode *p, *r = head;
    cout <<"输入数据" << endl;
    for(int i = 0; i < n; i++)
    {
        p = (LNode*)malloc(sizeof(LNode));
        p->next = NULL;
        cin >> p->data;
        p->next = r->next;
        r->next = p;
        r = p;
    }
    r->next = NULL;
}
int main()
{
    LNode *test;
    createListR(test);
    for(int i = 0; i < 6; i++)
    {
        cout << test->data << ",";
        test = test->next;
    }
}