#include<stdio.h>

typedef struct{
	
	int key;
	struct BTNode *lchild;
	struct BTNode *rchild;
}BTNode;

//�����㷨
BTNnode* BSTSearch(BTNode* bt, int key) {
	if(bt == null){
		return NULL;
	}
	else{
		if(bt->key == key){ //���õ��ڸ��ڵ�Ĺؼ��֣��򷵻����ڵ�ָ��λ�� 
			return bt;
		}
		else if(key bt->key){ //С�ڸ��ڵ㣬������������Ѱ�� 
			return BSTSearch(bt->lchild,key);
		}
		else{ //��֮��Ȼ 
			return BSTSearch(bt->rchild,key);
		}
	}
}

int BSTInsert(BTNode *&bt, int key){ //��ΪbtҪ�ı䣬����ʹ����������ָ�� 
	if(bt == NULL){ //��ǰλ��Ϊ�գ����Բ��� 
		bt =(BTNode*)malloc(sizeof(BTNode)); //�����½ڵ� 
		bt->lchild = bt->rchild = NULL;
		bt->key = key;
		return 1;
	}
	else if(key == bt->key){ //��������ͬ 
		return 0;
	}
	else if(key < bt->key){
		return BSTInsert(bt->lchild,key);
	}
	else{
		return BSTInsert(bt->rchild,key);
	}
}

void CreateBST(BTNode *&bt,int key[], int n){
	bt = NULL;
	for(int i = 0; i < n; i++){
		BSTInsert(bt,key[i]);
	}
}
