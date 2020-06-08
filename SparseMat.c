#include <stdio.h>

const int maxterm = 1000;
typedef struct{

    int val;
    int i, j;
} Trimat;

Trimat trimat[maxterm + 1];

//建立三元组
void createtrimat(float A[][maxterm], int m, int n, float B[][3]){

    int k = 1;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if(A[i][j] != 0){
                B[k][0] = A[i][j];
                B[k][1] = i;
                B[k][2] = j;
                ++k;
            }
        }
    }
        B[0][0] = k - 1;
        B[0][1] = m;
        B[0][2] = n;
}

//十字链表中的两种结点结构定义
typedef struct OLNode{

    int row, col;
    struct OLNode *right, *down;
    float val;
} OLNode;

//头节点结构定义
typedef struct{

    OLNode *rhead, *chead; //指向两头节点数组的指针
    int m, n, k; //矩阵行数、列数以及非零结点总数
} CrossList;
