#include<stdio.h>

const int maxsize = 1000;
int op(int a, char OP, int b){

    if(OP == '+')
        return a + b;
    if(OP == '-')
        return a - b;
    if(OP == '*')
        return a * b;
    if(OP == '/'){
        
        if(b == 0){
            printf("ERROR\n");
            return 0;
        }
        else{
            return a / b;
        }
    }
}

//后缀表达式
int com(char exp[]){
    int i, a, b, c;
    int stack[maxsize];
    int top = -1;
    char OP;
    for (i = 0; exp[i] != '\0';i++){
        if(exp[i] >= '0' && exp[i] <= '9'){
            stack[++top] = exp[i] - '0';
        }
        else{
            OP = exp[i];
            b = stack[top--];
            a = stack[top--];
            c = op(a, OP, b);
            stack[++top] = c;
        }
    }
    return stack[top];
} 
