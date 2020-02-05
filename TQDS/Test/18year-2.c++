//将item添加到单链表的表尾
#include <iostream>
using namespace std;
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
        r->next = p;
        r = r->next;
    }
    r->next = NULL;
}
void Add2Last(LNode *&head, int item)
{
    LNode *p;
    p = (LNode*)malloc(sizeof(LNode));
    p->next = NULL;
    p->data = item;
    LNode *r;
    r = head;
    while(r->next != NULL)
        r = r->next;
    if(r->next == NULL)
        r->next = p;
}
int main()
{
    LNode *test;
    createListR(test);
    Add2Last(test, 9);
    for(int i = 0; i < 6; i++)
    {
        cout << test->next->data << ",";
        test = test->next;
    }
}