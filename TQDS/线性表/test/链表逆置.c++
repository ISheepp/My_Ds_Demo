#include <iostream>
using namespace std;

typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode;

void createLinkListR(LNode *&head)
{
    head = (LNode*)malloc(sizeof(LNode));
    head->next = NULL;
    LNode *p = NULL, *r = head; //p指针接收新节点，r指针始终指向当前尾部结点
    int n; //数据结点个数
    cout << "输入数据个数：";
    cin >> n;
    cout << "输入元素" << endl;
    for(int i = 0; i < n; i++)
    {
        p = (LNode*)malloc(sizeof(LNode));
        p->next = NULL;
        cin >> p->data;
        p->next = r->next;
        r->next = p;
        r = p;
    }
}

int main(){
    LNode *l;
    l = (LNode*)malloc(sizeof(LNode));
    createLinkListR(l);
}