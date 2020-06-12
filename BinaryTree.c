#include<stdio.h>
const int maxSize = 10000;
typedef struct BTNode{

    char data; // 默认类型是char
    struct BTNode *lchild;
    struct BTNode *rchild;
} BTNode;

//前序遍历
void preorder(BTNode *p){
    if(p == NULL) return;
    printf("%d\n",p->data); //输出根节点;
    preorder(p->lchild);
    preorder(p->rchild);
}
//中序遍历
void inorder(BTNode *p){
    if(p == NULL) return;
    inorder(p->lchild);
    printf("%d\n", p->data);
    inorder(p->rchild);
}

//后序遍历
void postorder(BTNode *p){
    if(p == NULL) return;
    postorder(p->lchild);
    postorder(p->rchild);
    printf("%d\n", p->data);
}

void level(BTNode *p){
    int front, rear;
    BTNode *queue[maxSize]; //定义一个循环队列
    front = rear = 0;
    BTNode *q;
    if(p != NULL){
        rear = (rear + 1) % maxSize;
        queue[rear] = p; //根节点入队
        while(front != rear){ //当队列不为空的时候进行循环
            front = (front + 1) % maxSize;
            q = queue[front]; //队头结点出队
            printf("%d\n", q); //访问队头结点
            if(q->lchild != NULL){ //如果左子树不空，则左子树的根节点入队
                rear = (rear + !) % maxSize;
                queue[rear] = q->lchild;
            }
            if(q->rchild != NULL){ //如果右子树不空，则右子树的根节点入队
                rear = (rear + 1) % maxSize;
                queue[rear] = q->rchild;
            }
        }
    }
}