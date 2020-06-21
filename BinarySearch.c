#include<stdio.h> 

int Bsearch(int R[], int low, int high,int k){
	
	int mid;
	while( low <= high){
		mid = (low+mid)/2;
		if(R[mid] == k){
			return mid;
		}
		else if(R[mid] > k){
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return 0;
}

int search(int arr[], int l,int r, int k){
	l = arr[0];
	int len = sizeof(arr)/sizeof(arr[0]);
	r = arr[len];
	while(l < r){
		int mid = (l+r)/2;
		if(arr[mid] == k){
			return mid;
		}
		else if(arr[mid] > k){
			return search(arr,l,mid-1,k);
		}
		else{
			return search(arr,mid+1,r,k);
		}
	}
	return -1;
}

int main(){
	
	int arr[] = { 2, 3, 4, 10, 40 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x = 10; 
    //int bsearch = Bsearch(arr,0,n-1,x);
    //int result = search(arr, 0, n - 1, x); 
    printf("result = %d n = %d\n",bsearch,n);
    return 0;
}
