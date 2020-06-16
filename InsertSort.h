/**
 * 插入排序：时间复杂度O(N^2),最好情况是O(N)
 * 总执行次数: n(n-1)/2
 * 空间复杂度O(1)
 * */
void InsertSort(int arr[], int n){

    for (int i = 0; i < n; i++){
        int temp; //交换使用的临时变量
        temp = arr[i]; //关键字
        int j = i - 1;
        while(j >=0 && temp < arr[j]){
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = temp;
    }
}


