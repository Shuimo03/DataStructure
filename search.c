#include<stdio.h> 

int search(int arr[],int n, int k){
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == k){
			flag = 1; //������ҳɹ��Ͱ�flag���1 
		}
	}
	return flag; //����ʧ�ܷ���0 
}


int main(){
	
	int arr[5] = {1,2,3,4,5};
	int res = search(arr,5,3);
	printf("%d\n",res);
	return 0;
}
