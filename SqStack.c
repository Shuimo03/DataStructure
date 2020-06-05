#include<stdio.h>

const int maxsize = 1000; //栈的大小

//顺序栈实现
typedef struct
{
    int data[maxsize];
    int top;
} SqStack;


//初始化栈
void InitializeStack(SqStack &st){
    st.top = -1;
}

//判断空栈
int EmptyStack(SqStack st){
    if(st.top == -1){
        return 1;
    }
    return 0;
}

//进栈
int push(SqStack &st, int x){
    if(st.top == maxsize-1){
        return 0;
        ++(st.top);
    }
    st.data[st.top] = x;
    return 1;
}

//出栈代码
int pop(SqStack &st, int &x){
    if(st.top == -1){
        return 0;
    }
    x = st.data[st.top];
    --(st.top);
    return 1;
}
