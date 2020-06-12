#include<stdio.h>

const int maxsize = 1000;

typedef struct ArcNode{
    int adjvex;
    struct ArcNode *nextarc;
    int info;
} ArcNode;

typedef struct{
    char data;
    ArcNode *firstarc;
} VNode;

typedef struct{
    VNode adjlist[maxsize];
    int n, e;
} AGraph;


void Vist(int v){

}

void BFS(AGraph *G, int v, int visit[maxsize]){
    visit[maxsize] = {0}; //初始化全为0
    ArcNode *p;
    int queue[maxsize], front = 0, rear = 0; //队列简单定义写法
    int j;
    Vist(v);
    visit[v] = 1;

    rear = (rear + 1) % maxsize;
    queue[rear] = v;
    while(front != rear){
        front = (front + 1) % maxsize;
        j = queue[front];
        p = G->adjlist[j].firstarc;
        while (p != NULL)
        {
            if(visit[p->adjvex] == 0){
                Vist(p->adjvex);
                visit[p->adjvex] = 1;
                rear = (rear) + 1 % maxsize;
                queue[rear] = p->adjvex;
            }
        }
        p = p->nextarc;
    }
}