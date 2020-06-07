#include<stdio.h>
#include<stdlib.h>

const int maxSize = 10000;
typedef struct{

    char[maxSize];
    char *ch;
    int length;

} Str;

void getnext(Str substr,next[]){
    int i = 1, j = 0;
    next[1] = 0;
    while(i < substr.length){
        if(j ==0 || substr.ch[i] == substr.ch[j]){
            ++i;
            ++j;
            next[i] = j;
        }
        else{
            j = next[i];
        }
    }
}

int KMP(Str str,Str substr,int next[]){
    int i = 1;
    int j = 1;
    while(i <= str.length && j <= substr.length){
        if(j == 0 || str.ch == substr.ch[j]){
            ++i;
            ++j;
        }
        else{
            j = next[j];
        }
        if(j > substr.length){
            return i - substr.length;
        }
        else{
            return 0;
        }
    }
}

void getnextval(Str substr,int nextval[]){
    int i = 1, j = 0;
    nextval[1] = 0;
    while( i < substr.length){
        if(j ==0 || substr.ch[i] == substr.ch[j]){
            ++i;
            ++j;
            if(substr.ch[i] != substr.ch{j}){
                nextval[i] = j;
            }
            else{
                nextval[i] = nextval[j];
            }
            else{
                j = nextval[j];
            }
        }
    }
}