#include <stdio.h>

const int maxsize = 1000; //队列大小
typedef struct LNode{
    int data;
    int rear; //队头
    int front; //队尾
    struct LNode *next;
} LNode;


//初始化代码
void initQueue(LNode *&lqu){
    lqu = (LNode *) malloc(sizeof(LNode));
    lqu->front = lqu->rear = NULL;
}

//判断队空
int isQueueEmpty(LNode *lqu){
    if(lqu ->rear == NULL || lqu->front == NULL)
        return 1;
    else
        return 0;
}

//入队
void push(LNode *lqu, int x){
    LNode *p;
    p = (LNode *)malloc(sizeof(LNode));
    p->data = x;
    p->next = NULL;
    if (lqu->rear == NULL){
        lqu->front = lqu->rear = p;
    }
    else{
        lqu->rear->next = p;
        lqu->rear = p;
    }
}

//出队
int pop(LNode *lqu, int &x){
    LNode *p;
    if (lqu->rear == NULL){
        return 0;
    }
    else{
        p = lqu->front;
    }
    if(lqu->front = lqu->rear){
        lqu->front = lqu->rear = NULL;
    }
    else{
        lqu->front = lqu->front->next;
    }
    x = p->data;
    free(p);
    return 1;
}