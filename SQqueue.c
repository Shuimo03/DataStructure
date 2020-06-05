#include<stdio.h>

const int maxsize = 1000; //队列大小

//线性表实现
typedef struct{

    int data[maxsize];
    int rear; //队头
    int front; //队尾
} SqQueue;

//初始化队列
void initQueue(SqQueue &qu){
    qu.front = qu.rear = 0; //队首队尾重合，并且指向0
}

//判断队列是否满了
int isQueueEmpty(SqQueue qu){
    if(qu.front == qu.rear){
        return 1;
    }
    else{
        return 0;
    }
}

//进队算法
int push(SqQueue &qu, int x){
    if((qu.rear+1) % maxsize == qu.front){ //队满的判断条件
        return 0;
    }
    qu.rear = (qu.rear + 1) % maxsize;
    qu.data[qu.rear] = x;
    return 1;
}

//出队算法
int pop(SqQueue &qu, int &x){
    if(qu.front == qu.rear){ // 判断队列是否为空
        return 0;
    }

    qu.front = (qu.front + 1) % maxsize;
    x = qu.data[qu.front];
    return 1;
}

