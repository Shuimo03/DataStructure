#include<stdio.h>

const int maxsize = 1000;

//括号匹配问题
int match(char exp[], int n){

    char stack[maxsize];
    int top = -1;

    for (int i = 0; i < n; i++){
        if(exp[i] == '('){
            stack[++top] = '(';
        }
        else if(exp[i] == ')'){
            if( top == -1){
                return 0;
            }
            else{
                --top;
            }
        }
    }

    if(top ==-1){
        return 1;
    }
    else{
        return 0;
    }
}