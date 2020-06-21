#include<stdio.h> 

int search(int arr[],int n, int k){
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == k){
			flag = 1; //如果查找成功就把flag变成1 
		}
	}
	return flag; //查找失败返回0 
}


int main(){
	
	int arr[5] = {1,2,3,4,5};
	int res = search(arr,5,3);
	printf("%d\n",res);
	return 0;
}
