/**
 * 最大子序列问题
 */
#include<stdio.h>

/**
 * 暴力法,时间复杂度是O(N^3)
 * */

int MaxSubeqSum1(int A[], int N){
    int ThisSum, MaxSum = 0;
    for (int i = 0; i < N; i++){
        for (int j = i; j < N; j++){
            for (int k = i; k <= j; k++){
                ThisSum += A[k];
            }
            if(ThisSum > MaxSum){
                MaxSum = ThisSum;
            }
        }
    }
    return MaxSum;
}

/**
 * 在线处理,时间复杂度O(N),在线是指每输入一个数据就进行及时处理，在任何一个地方
 * 中止输入，算法都能正确给出当前的解。
 * */

int MaxSubeqSum2(int A[], int N){
    int ThisSum, MaxSum;
    ThisSum = MaxSum = 0;
    for (int i = 0; i < N; i++){
        ThisSum += A[i];
        if(ThisSum > MaxSum){
            MaxSum = ThisSum;
        }
        else if(ThisSum < 0){
            ThisSum = 0;
        }
    }
    return MaxSum;
}

int main(){

}