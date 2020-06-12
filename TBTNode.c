#include <stdio.h>
typedef struct TBTNode{

    char data;
    int ltag, rtag; //线索标记
    struct TBTNode *lchild;
    struct TBTNode *rchild;
} TBTNode;

//通过中序遍历对二叉树线索化的递归算法
void InThread(TBTNode *p, TBTNode *&pre){
    if(p != NULL){
        InThread(p->lchild, pre); //递归，左子树线索化
        if(p->lchild == NULL){ //建立当前结点的前驱线索
            p->lchild = pre;
            p->ltag = 1;
        }
        if(pre != NULL && pre->rchild == NULL){ //建立前驱节点的后继线索
            pre->rchild = p;
            pre->rtag = 1;
        }
        pre = p; //pre指向当前的p,作为p将要指向的下一个结点的前驱结点指示指针
        p = p->rchild; //p指向一个新结点，此时pre和p分别指向的结点形成了一个前驱后继对为下一次线索的连接做准备
        InThread(p, pre); //递归，右子树线索化
    }
}

//通过中序遍历建立中序线索二叉树的主程序如下
void createInThread(TBTNode *root){
    TBTNode *pre = NULL;
    if(root != NULL){

        InThread(root, pre);
        pre->rchild = NULL; //非空二叉树,线索化
        pre->rtag = 1; //后处理中序最后一个结点
    }
}

//求以p为根的中序线索二叉树中，中序序列下的第一个结点算法
TBTNode *First(TBTNode *p){
    while(p->ltag == 0){
        p = p->lchild;
    }
    return p;
}

//求在中序线索二叉树中，结点p在在中序下的后继结点算法
TBTNode *Next(TBTNode *p){
    if(p->rtag == 0)
        return First(p->rchild);
    else
        return p->rchild;
}

//线索二叉树上执行的中序遍历算法
void Inorder(TBTNode *root){
    for (TBTNode *P = First(root); p != NULL; p = Next(p)){
        printf("%d", p->data);
    }
}