#include<stdio.h>

void PrintN(int n){
    for (int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
    return;
}

void printN(int n){
    if(n){
        printN(n - 1);
        printf("%d\n", n);
    }
    return;
}

int main(){

    int n = 0;
    scanf("%d", &n);
    PrintN(n);
    printN(n);
    return 0;
}