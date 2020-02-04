/*单链表的拆分
输入N个整数顺序建立一个单链表，将该单链表拆分成两个子链表，
第一个子链表存放了所有的偶数，第二个子链表存放了所有的奇数。两个子链表中数据的相对次序与原链表一致。
*/
#include <iostream>
using namespace std;
typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode;
void createListR(LNode *&head)
{
    int n;
    cout << "输入单链表长度N：";
    cin >> n;
    head = (LNode *)malloc(sizeof(LNode));
    head->next = NULL;
    LNode *p = NULL, *r;
    r = head;
    cout << "输入N个整数：";
    for (int i = 0; i < n; i++)
    {
        p = (LNode *)malloc(sizeof(LNode));
        p->next = NULL;
        cin >> p->data;
        r->next = p;
        r = r->next;
    }
    r->next = NULL;
}
void split(LNode *&head1)
{
    LNode *head2;
    head2 = (LNode *)malloc(sizeof(LNode));
    LNode *r;
    r = head2;
    LNode *pre;
    pre = head1;
    LNode *p = pre->next;
    while (p)
    {
        if (p->data % 2)//奇数
        {
            pre = p;
            p = p->next;
        }
        else
        {
            pre->next = p->next;
            r->next = p;
            r = p;
            p = pre->next;
        }
    }
    r->next = NULL;
}