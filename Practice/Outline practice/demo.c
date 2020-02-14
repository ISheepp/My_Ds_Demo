#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node *next;
}node, *LinkList;

LinkList CreateFromHead(){
	node *head;
	int x;
	head = (node *)malloc(sizeof(node));
	if(head == NULL) {
		printf("请求空间失败！"); 
	}
	head -> next = NULL;
	//ctrl+z结束输入链表节点 
	while(scanf("%d",&x)!= EOF) {
		node *p;
		p = (node *)malloc(sizeof(node));
		p -> data = x;
		p ->next = head ->next;
		head ->next = p;
	}
	return head;
}

void ShowList(LinkList head) {
	node *p;
	p = head;
	while(p ->next != NULL) {
		p = p ->next;
		printf("%d ",p ->data);
	}
	printf("\n"); 
}

void chaiFen(LinkList head, LinkList a, LinkList b) {
	node *p = head;
	node *l = a;
	node *r = b;
	l ->next = NULL;
	r ->next = NULL;
	
	while(p ->next != NULL) {
		p = p ->next;
		if(p ->data % 2 != 0) {
			node *temp = (node *)malloc(sizeof(node));
			temp ->data = p ->data;
			temp ->next = l ->next;
			l ->next = temp;
		} else {
			node *temp = (node *)malloc(sizeof(node));
			temp ->data = p ->data;
			temp ->next = r ->next;
			r ->next = temp;
		}
	}
} 

main(){
	node *ListHead;
	node *a = (node *)malloc(sizeof(node));
	node *b = (node *)malloc(sizeof(node));	
	printf("创建链表：\n"); 
	ListHead = CreateFromHead();
	printf("原链表："); 
	ShowList(ListHead);
	
	//拆分 
	chaiFen(ListHead, a, b);
	printf("奇数链表："); 
	ShowList(a);
	printf("偶数数链表："); 
	ShowList(b);
	system("pause");
}