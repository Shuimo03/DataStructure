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
    VNode edges[maxsize][maxsize];
} AGraph;

//排序算法
void sort(Road road,int E){

}

typedef struct 
{
    int a, b; //a和b为一条边所连的两个顶点
    int w;    //边的权值

}Road;

Road road[maxsize];
int v[maxsize]; //定义并查集数组

int getRoot(int a){ //在并查集中查找根节点的函数
    while(a !=v[a]) a = v[a];
    return a;
}

void Kruskal(AGraph g, int &num, Road road[]){
    int i;
    int N, E, a, b;
    N = g.n;
    E = g.e;
    sum = 0;
    for (i = 0; i < N; i++) V[i] = i;
    sort(road, E);
    for (int i = 0; i < E; i++){
        a = getRoot(road[i].a);
        b = getRoot(road[i].b);

        if(a != b){
            v[a] = b;
            sum += road[i].w;
        }
    }
}
