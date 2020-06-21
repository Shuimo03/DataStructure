//顺序表
#include<stdio.h>
#include<stdlib.h>
#define maxSize 100

typedef struct Sq{
    int data[maxSize]; //存放顺序表元素的数组
    int length; //顺序表长度
} Sqlist;


/**
 * 单链表结点定义
 * */
typedef struct LNode{
    int data; //数据域
    struct LNode *next; //指针域，指向后继结点的指针
} DLNode;

/**
 * 在一个顺序表L中，其中元素顺序有序排列，插入一个元素x，保证插入后顺序表保持一致
 * 将x和顺序表L中元素，挨个比较，确定位置后插入
 * **/

int findElem(Sqlist L, int x){
    int cnt = 0;
    for (int i = 0; i < maxSize; i++){
        if(x < L.data[i]){
            cnt++;
            return cnt;//查看x是否小于当前所扫描的元素，如果小于直接访问小于的位置
        }
    }
    return cnt; // 扫描结束后，发现没有比x大的元素，x为最大元素，则在终端插入
}

void insertElem(Sqlist &L,int x){
    int p = findElem(L, x); //查找插入的位置
    for (int i = L.length - 1; i >= p; i--){
        L.data[i + 1] = L.data[i];
    }
    L.data[p] = x;//将x放到插入p的位置上
    ++(L.length); //因为多了一个元素,所以表长也增加。
}

//顺序表删除
int deleteElem(Sqlist &L, int p, int &e){
    if(p < 0 || p > L.length-1){
        return 0; //位置不对
    }
    e = L.data[p]; // 被删除元素赋值给e
    for (int i = p; i < L.length - 1; i++){
        L.data[i] = L.data[i + 1];
    }
    --(L.length);
    return 1;
}

