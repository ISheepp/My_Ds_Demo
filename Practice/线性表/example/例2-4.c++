//查表链表C（带头节点)中是否存在一个值为x的结点，若存在，删除该结点返回1，否则返回0
#include <iostream>
using namespace std;
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode;
void createListR(LNode *&head)
{
    int n;
    cout << "输入链表长度:";
    cin >> n;
    head = (LNode*)malloc(sizeof(LNode));
    head->next = NULL;
    LNode *p = NULL, *r;
    r = head;
    cout << "输入数据:";
    for(int i = 0; i < n; i++)
    {
        p = (LNode*)malloc(sizeof(LNode));
        p->next = NULL;
        cin >> p->data;
        r->next = p;
        r = r->next;
        // p->next = r->next;
        // r->next = p;
        // r = p;
    }
    r->next = NULL;
}
int findAndDelete(LNode *C, int x)
{
    LNode *p, *q;
    p = C;
    /*查找部分开始*/
    while(p->next != NULL)
    {
        if(p->next->data == x)
            break;
        p = p->next;
    }
    //查找结束
    if(p->next == NULL)
        return 0;
    else
    {
        //删除
        q = p->next;
        p->next = p->next->next;
        free(q);
        //删除结束
        return 1;
    }
}

int main()
{
    LNode *C;
    createListR(C);
    findAndDelete(C, 2);
    for(int i = 0; i < 5; i++)
    {
        cout << C->next->data << ",";
        C = C->next;
    }
}