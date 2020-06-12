#include<stdio.h>
const int maxSize = 10000;

typedef struct BTNode{
    char data;
    BTNode *lchild;
    BTNode *rchild;
} BTNode;

void preoderNonrecursion(BTNode *bt){
    
    if(bt != NULL){

        BTNode *Stack[maxSize];//定义一个栈
        int top = -1; //初始化栈
        BTNode *p;
        Stack[++top] = bt;//根节点入栈
        while(top != -1){ //栈空循环退出,遍历结束
            p = Stack[top--];
            printf("%d\n", p->data);
            if(p->rchild != NULL)
                Stack[++top] = p->rchild;
            if(p->lchild != NULL)
                Stack[++top] = p->lchild;
        }
    }
}

void inorderNonrecursion(BTNode *bt){
    if(bt != NULL){
        BTNode *Stack[maxSize];
        int top = -1;
        BTNode *p;
        p = bt;
        while(top != -1 || p != NULL){ //左孩子存在,则右孩子入栈
            while(p!=NULL){
                Stack[++top] = p;
                p = p->lchild;
            }
            if(top != -1){ //在栈不空的情况下出栈并输出栈结点
                p = Stack[top--];
                printf("%d\n", p->data);
                p = p->rchild;
            }
        }
    }
}

void postorderNonrecursion(BTNode *bt){
    if(bt != NULL){
        /*定义两个栈*/
        BTNode *Stack1[maxSize];
        int top1 = -1;
        BTNode *Stack2[maxSize];
        int top2 = -1;
        BTNode *p = NULL;
        Stack1[++top1] = bt;
        while(top1 != -1){
            p = Stack1[top1--];
            Stack2[++top2] = p;
            if(p->lchild != NULL){
                Stack1[++top1] = p->lchild;
            }
            if(p->rchild != NULL){
                Stack1[++top1] = p->rchild;
            }
        }
        while(top2 != -1){
            p = Stack2[top2--];
            printf("%d\n", p->data);
        }
    }
}