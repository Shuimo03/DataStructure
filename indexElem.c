#include<stdio.h> 
#define maxSize 500
typedef struct{
	int key; //�������Ԫ�ض�Ϊint
	int low,high; //������еĵ�һ��Ԫ�غ����һ��Ԫ��λ�� 
}indexElem;

indexElem index[maxSize]; //����������
 
