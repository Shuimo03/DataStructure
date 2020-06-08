#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "  ";
    int len = sizeof(str) / sizeof(str[0]);
    int slen = strlen(str);
    printf("len = %d \n", len);
    printf("strlen = %d\n", slen);
    return 0;
}

/**
 * 字符串长度根据字符串内元素数，不算\0
 * 字符串占位空间需要加上\0
 * 
 * */