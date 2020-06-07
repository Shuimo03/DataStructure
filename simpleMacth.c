#include<stdio.h>
#include<stdlib.h>

const int maxSize = 10000;

typedef struct{

    char str[maxSize + 1];
    char *ch;
    int length;
} Str;

int index(Str str,Str substr){

    int i = 1, j = 1, k = 1;
    while(i <= st.length && j <= substr.length){
        if(str.ch[i] == substr.ch[j]){
            i++;    
            j++;
        }
        else{
            j = 1;
            i = ++k; //匹配失败，i从主串的下一位置开始，
        }
    }

    if(j > substr.length){
        return k;
    }
    else{
        return 0;
    }
}