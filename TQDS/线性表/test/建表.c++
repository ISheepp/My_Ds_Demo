#include <iostream>
#define maxSize 50
using namespace std;

int A[maxSize];
int length;
int createList(int A[], int &length)
{
    cin >> length;
    if(length > maxSize)
        return 0;
    for(int i = 0; i < length; i++)
    {
        cin >> A[i];
    }
    return 1;
}
//尾插法建单链表
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
    cin >> n;
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
//头插法
void createLinkListH(LNode *&head)
{
    head = (LNode*)malloc(sizeof(LNode));
    head->next = NULL;
    LNode *p = NULL;
    int n; //数据结点个数
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        p = (LNode*)malloc(sizeof(LNode));
        p->next = NULL;
        cin >> p->data;
        p->next = head->next;
        head->next = p;
    }
}
int main()
{
    int example[20];
    int length;
    createList(example, length);
    for(int i = 0; i < length; i++)
    {
        cout << example[i] << ",";
    }
}