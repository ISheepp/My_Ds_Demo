/*A和B是两个单链表(带表头节点)，其中元素递增有序。设计一个算法，
将A和B归并成一个按元素值非递减有序的链表C，C由A和B中的结点组成
*/
#include <iostream>
using namespace std;
//尾插法
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
    cout << "输入结点个数：";
    cin >> n;
    cout << "输入数据：";
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
void merge(LNode *A, LNode *B, LNode *C)
{
    LNode *p = A->next;
    LNode *q = B->next;
    LNode *r; //始终指向终端节点
    C = A;
    C->next = NULL;
    free(B);
    r = C;
    while(p != NULL && q != NULL)
    {
        if(p->data <= q->data)
        {
            r->next = p;p = p->next;
            r= r->next; 
        }
        else
        {
            r->next = q;q = q->next;
            r = r->next;
        }
    }
    if(p != NULL)
        r->next = p;
    if(q != NULL)
        r->next = q;
}
int main()
{
    LNode *test;
    createLinkListR(test);
    //链表的输出
    for(int i = 0; i < 6; i++)
    {
        cout << test->data << ",";
        test = test->next;
    }
    cout << endl;
}