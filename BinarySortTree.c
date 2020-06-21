#include<stdio.h>

typedef struct{
	
	int key;
	struct BTNode *lchild;
	struct BTNode *rchild;
}BTNode;

//查找算法
BTNnode* BSTSearch(BTNode* bt, int key) {
	if(bt == null){
		return NULL;
	}
	else{
		if(bt->key == key){ //正好等于根节点的关键字，则返回所在的指针位置 
			return bt;
		}
		else if(key bt->key){ //小于根节点，就在左子树上寻找 
			return BSTSearch(bt->lchild,key);
		}
		else{ //反之亦然 
			return BSTSearch(bt->rchild,key);
		}
	}
}

int BSTInsert(BTNode *&bt, int key){ //因为bt要改变，所以使用引用类型指针 
	if(bt == NULL){ //当前位置为空，可以插入 
		bt =(BTNode*)malloc(sizeof(BTNode)); //创造新节点 
		bt->lchild = bt->rchild = NULL;
		bt->key = key;
		return 1;
	}
	else if(key == bt->key){ //插入结点相同 
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
