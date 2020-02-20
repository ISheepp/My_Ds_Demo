#include <iostream>
using namespace std;
typedef struct DLNode{
    int data;
    struct DLNode *next;
    struct DLNode *prior;
}DLNode;
//建表
void createDLNodeList(DLNode *&head){
    head = (DLNode*)malloc(sizeof(DLNode));
    head->next = NULL;
    DLNode *r, *p;
    r = head;
    int n;
    cout << "输入双向链表长度:";
    cin >> n;
    cout << "输入数据:";
    for(int i = 0; i < n; i++){
        p = (DLNode*)malloc(sizeof(DLNode));
        p->next = NULL;
        cin >> p->data;
        r->next = p;
        p->prior = r;
        r = r->next;
    }
    r->next = NULL;
}
//查找
DLNode* findNode(DLNode *head, int e){
    DLNode *p;
    p = head->next;
    while(p != NULL){
        if(p->data == e)
            break;
        p = p->next;
    }
    return p;
}
//打印
void show(DLNode *head){
    while(head->next != NULL){
        head = head->next;
        cout << head->data << " ";
    }
    cout << endl;
}
int main(){
    DLNode *test;
    createDLNodeList(test);
    show(test);
    system("pause");
}