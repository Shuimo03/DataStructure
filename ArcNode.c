#include<stdio.h>

const int maxsize = 1000;

typedef struct ArcNode{

    int adjvex; //该边所指向的结点位置
    struct ArcNode *nextarc; //指向下一条边的指针
    int info;
} ArcNode;

typedef struct{

    char data; //顶点信息
    ArcNode *firstarc; //指向第一条边的指针
} VNode;

typedef struct{
    VNode adjlist[maxsize]; //邻接表
    int n, e; //定点数和边
} AGraph;
