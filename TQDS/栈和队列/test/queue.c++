//用链表来实现队列
#include <iostream>
using namespace std;
typedef struct Node{
    int value;
    struct Node *next;
}Node;
typedef struct queue{
    Node *head;//链表第一个结点
    Node *last;//链表最后一个结点
}queue;
//初始化
void queueInit(queue *q){
    q->head = q->last = NULL;
}
//销毁
void queueDestroy(queue *q){
    Node *cur, *next;
    for(cur = q->head; cur != NULL;cur = next){
        next = cur->next;
        free(cur);
    }
    q->head = q->last = NULL;
}
//入队列头插
void push(queue *q, int v){
    Node *node = (Node*)malloc(sizeof(Node));
    node->value = v;
    node->next = NULL;
    if(q->head ==NULL){
        q->head = node;
        q->last = node;
    }
    else
    {
        q->last->next = node;
        q->last = node;
    }
}
//出队列
void pop(queue *q){
    Node *second = q->head->next;
    free(q->head);
    q->head = second;
    if(q->head == NULL)
        q->last = NULL;
}
//读队首元素
int front(queue *q){
    return q->head->value;
}
//返回队列的大小
int size(queue *q){
    int size = 0;
    for(Node *c = q->head; c != NULL; c = c->next)
    {
        size ++;
    }
    return size;
}
//判断队列是否为空
int empty(queue *q){
    if(q->head == NULL)
        return 1;
    else
        return 0;
}