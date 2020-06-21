#include <stdio.h>

//加了typedef是类型，不是变量，不加typedef是变量
typedef struct LNode{
    int data; //值域
    struct LNode *next; //指针域
} LNode;

void merge(LNode *A, LNode *B, LNode *&C){
    if(A == NULL || B == NULL)
        return;
    LNode *p = A->next; //p相当于单链表A中最小结点
    LNode *q = B->next; //同理
    LNode *r; //C的终端结点
    C = A; // 用A的头节点来做C的头节点
    C->next = NULL;
    free(B);
    r = C;
    while(p!= NULL && q!= NULL){
        if(p->data <= q->data){
            r->next = p;
            p = p->next;
            r = r->next;
        }
        else{
            r->next = q;
            q = q->next;
            r = r->next;
        }
    }
    r->next = NULL;
    if (p != NULL)
        r->next = p;
    if(q != NULL)
        r->next = q;
}