/*输入N个整数顺序建立一个单链表，将该单链表拆分成两个子链表，
第一个子链表存放了所有的偶数，第二个子链表存放了所有的奇数。
两个子链表中数据的相对次序与原链表一致。
*/
#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode;
//建表
void createListR(LNode *&head){
    int length;
    cout << "输入链表长度：";
    cin >> length;
    head = (LNode*)malloc(sizeof(LNode));
    head->next = NULL;
    LNode *p, *r;
    r = head;
    p->next = NULL;
    cout << "输入数据：";
    for(int i = 0; i < length; i++){
        p = (LNode*)malloc(sizeof(LNode));
        cin >> p->data;
        r->next = p;
        r = r->next;
    }
    r->next = NULL;
}

//打印单链表
void showList(LNode *head){
    while(head->next != NULL){
        head = head->next;
        cout << head->data << " ";
    }
    cout << endl;
}
int main(){
    LNode *test;
    createListR(test);
    showList(test);
    system("pause");
}