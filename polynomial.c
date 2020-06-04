#include<stdio.h>
#include<time.h>
#include<math.h>
#define MAXN 10
#define MAXK 1e7

clock_t start, stop; //clock_t是clock()函数返回的变量类型

double duration; //记录被测函数运行时间，以秒为单位
double f1(int n, double a[], double);
double f2(int n, double a[], double x);
int main(){

    double a[MAXN];
    for (int i = 0; i < MAXN;i++){
        a[i] = i;
    }
    start = clock();
    for (int i = 0; i < MAXK;i++){
        f2(MAXN - 1, a, 1.1);
    }
    stop = clock();
    duration = ((double)(stop - start)) / CLK_TCK/MAXK;
    printf("ticks1 = %f\n", (double)(stop - start));
    printf("duration = %6.2e\n", duration);
    return 0;
}
//多项式代码
double f1(int n, double a[], double x){
    double p = a[0];
    for (int i = 1; i <= n; i++){
        p += (a[i] * pow(x, i));
    }
    return p;
}

//改进版多项式代码
double f2(int n, double a[], double x){
    double p = a[n];
    for (int i = n; i >= 0; i--){
        p = a[i - 1] + x * p;
    }
    return p;
}