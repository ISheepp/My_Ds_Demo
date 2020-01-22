## 栈（stack）

先进后出（First in，Last out--FILO）

栈是一种只能在一端进行插入或删除操作的**线性表**

### 顺序栈

`int stack[maxSize];int top = -1;`栈的元素范围是0-top

元素入栈：`stack[++top] = 1` 先让top自增1，再取top位置的值（1入栈）。

元素出栈：`x = stack[top--]` 先取top的值，再让top前移一位



### 链栈

```cpp
LNode *head = (LNode*)malloc(sizeof(LNode));
head->next = NULL;
LNode *top = NULL;//栈顶指针
//元素入栈，为将要入栈的元素构造一个结点，然后插入到头节点之后
top = (LNode*)malloc(sizeof(LNode));
top->next = NULL;
top->data = 'A'; //数据元素
top->next = head->next;
head->next = top;
//元素出栈，先取出出栈元素，再取top结点
x = top->data;
head->next = top->next;
free(top);
top = head->next;
```

`head->next == NULL`为真，则栈空；只要有足够内存，栈就不会满。