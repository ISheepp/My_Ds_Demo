#include <iostream>
using namespace std;
typedef struct stack{
    int array[100];
    int size;
}stack;
//初始化
void stackInit(stack *s){
    s->size = 0;
}
//销毁
void stackDestroy(stack *s){
    s->size = 0;
}
//插入，压栈
void push(stack *s, int v){
    s->array[s->size++] = v;
}
//删除
void pop(stack *s){
    s->size--;
}
//返回栈顶数据，不需要删除栈顶数据
int top(stack *s){
    return s->array[s->size-1];
}
//返回栈内数据个数
int size(stack *s){
    return s->size;
}
/*
返回栈是否是空栈(里面没有数据)
返回0表示不是空的，返回非0表示是空的
*/
int empty(stack *s){
    return !s->size;
}
//读栈顶元素就是要返回最后入栈的值，然后栈中元素个数减一。