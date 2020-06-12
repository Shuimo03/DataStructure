#include <stdio.h>
const int maxsize = 1000;
const int INF = _INTEGRAL_MAX_BITS;
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

void Prim(AGraph g,int v0, int &num){

    int lowcost[maxsize], vset[maxsize], v;
    int i, j, k, min;
    v = v0;
    for (i = 0; i < g.n; i++){
        lowcost[i] = g.edges[vo][i];
        vset[i] = 0;
    }
    vset[v0] = 1;
    sum = 0;
    for (i = 0; i < g.n - 1;i++){
        min = INF;
        //下面循环用于选出候选边中最小者
        for (j = 0; j < g.n; j++){
            if(vset[j] == 0 && lowcost[j] < min){ //选出当前生成树到其余顶点
                min = lowcost[j];
                k = j;
            }
            vset[k] = 1;
            v = k;
            sum += min; //记录最小生成树权值

            for (j = 0; j < g.n; j++){
                if(vset[j] == 0 && g.edges[v][j] < lowcost[j]){
                    lowcost[j] = g.edges[v][j];
                }
            }
        }
    }
}