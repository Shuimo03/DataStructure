#include<stdio.h>

const int maxsize = 1000;

typedef struct{

    int no; //顶点编号
    char info;//顶点其他信息
} VertexType;

typedef struct{

    int edges[maxsize][maxsize];
    //邻接矩阵定义，如果是有权图，则在此句中将int改为float
    int n, e;
    VertexType vex[maxsize];
} MGraph;

