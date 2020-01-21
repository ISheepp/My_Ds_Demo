#include <iostream>
using namespace std;
//定义单链表结构体
typedef struct LNode
{
    int data;
    struct LNode *next;
} LNode;
//创建单链表(尾插法)
void createLinkListR(LNode *&head)
{
    head = (LNode *)malloc(sizeof(LNode));
    head->next = NULL;
    LNode *p = NULL; //接收新节点
    LNode *r = head; //始终指向尾结点
    int n;
    cout << "输入结点个数:";
    cin >> n;
    cout << "请输入结点数据:";
    for (int i = 0; i < n; i++)
    {
        p = (LNode *)malloc(sizeof(LNode));
        p->next = NULL;
        cin >> p->data;
        p->next = r->next;
        r->next = p;
        r = p;
    }
}
//输出
void show(LNode *head)
{
    LNode *p;
    p = head->next;
    while (p != NULL)
    {
        cout << p->data << ",";
        p = p->next;
    }
}
//插入
int insertLinkList(LNode *&head, int i, int e)
{
    int j;
    LNode *p, *s; //这里跟上面是一样的，就不多说了//
    p = head;     //地址传递//
    j = 0;
    while (p && j < i - 1)
    {
        p = p->next;
        ++j;
    } //这里用一个while循环，来找到我们的 i ，也就是插入的位置//
    if (!p || j > i - 1)
        return 0;    //然后如果输入的位置已经超过了链表的长度了，怎么办，这里会用一个if语句来判断，如果大于了链表的长度，那我们就直接退出插入程序了//
    s = (LNode *)malloc(sizeof(LNode)); //一样的
    s->data = e;
    s->next = p->next;
    p->next = s;
    return 1;
}
//删除
int ListDelete_L(LNode *head, int i, int e)
{
    int j;
    LNode *p, *q;
    p = head;
    j = 0;
    while (p->next && j < i - 1)
    { //这里同样是用while循环来找到我们要删除的位置//
        p = p->next;
        ++j;
    }
    if (!(p->next) || j > i - 1)
        return 0; //same again//
    q = p->next;                          //怎么删除呢    
        p->next = q->next;             //把你要删除的那个位置的节点删掉就好了，但是删掉之前，得把它的遗产解决了
    e = q->data;                       //也就是要把节点的指向改了，这样我们的链表就还是连在一起的哦，然后把删掉的元素赋值给e，留作纪念咯//
    free(q);
    return 1;
}
//测试
int main()
{
    LNode *head;
    createLinkListR(head);
    // insertLinkList(head, 2, 3);
    show(head);
}