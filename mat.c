#include<stdio.h>

const int MaxSize = 1000;
//矩阵转置
void trsmat(int A[][MaxSize],int B[][MaxSize],int m, int n){
    for (int i = 0; i < m;i++){
        for (int j = 0; j < n; j++){
            B[j][i] = A[i][j];
        }
    }
}

//矩阵相加
void addmat(int C[][MaxSize], int A[][MaxSize], int B[][MaxSize], int m,int n){
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

//矩阵相乘
void mutmat(int C[][MaxSize], int A[][MaxSize, int B[][MaxSize], int m,int m, int k){
    fpr(int i = 0; i < m;i++){
        for (int j = 0; j < k; j++){
            C[i][j] = 0;
            for (int h = 0; h < n;h++){
                C[i][j] += A[i][h] * B[h][j];
            }
        }
    }
}