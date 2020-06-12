#include <stdio.h>

//以邻接表为存储结构的图的深度优先搜索算法
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

//代表一类访问顶点v的操作
void Visit(int v){

}

/**
 * v是起点编号,visit[]是一个全局数组，作为顶点的访问标记，初始时所有元素均为0
 * 表示所有顶点都未被访问，因为图中可能存在回路，当前经过的顶点在将来可能再次经过，
 * 所以要对每个顶点进行标记，以免重复访问
*/
int visit[maxsize];
void DFS(AGraph *G, int v){
    ArcNode *p;
    visit[v] = 1;
    Visit(v);
    p = G->adjlist[v].firstarc;
    while(p!= NULL){
        if(visit[p->adjvex] == 0){ //如果顶点未被访问,则递归访问它
            DFS(G, p->adjvex);
            p = p->nextarc; //p指向顶点v的下一条边的终点
        }
    }
}