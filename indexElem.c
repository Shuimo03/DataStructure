#include<stdio.h> 
#define maxSize 500
typedef struct{
	int key; //假设表中元素都为int
	int low,high; //假设表中的第一个元素和最后一个元素位置 
}indexElem;

indexElem index[maxSize]; //定义索引表
 
