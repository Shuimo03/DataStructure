#include<stdio.h>

const int maxsize = 1000;

typedef struct ListStack{
    int data;
    struct ListStack *next;
} ListStack;


//初始化栈
void InitializeStack(ListStack *&list){
    list = (ListStack *)malloc(sizeof(ListStack)); //制造一个头节点
    list->next = NULL;
}

//判断空栈
int EmptyStack(ListStack *list){
    if (list->next == NULL){
        return 1;
    }
    return 0;
}

//进栈
int push(ListStack *list, int x){
    ListStack *p;
    p = (ListStack *)malloc(sizeof(ListStack)); //为进栈元素申请空间
    p->next = NULL;

    p->data = x;
    p->next = list->next;
    list->next = p;
}

//出栈
int pop(ListStack *list, int &x){

    ListStack *p;
    if(list->next == NULL){
        return 0;
    }

    p = list->next;
    x = p->data;
    list->next = p->next;
    free(p);
    return 1;
}