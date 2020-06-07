//定长顺顺序存储表示结构体
#include<stdio.h>
#include<stdlib.h>
const int maxSize = 10000;

typedef struct{

    char str[maxSize + 1];
    char *ch;
    int length;
} Str;

int strassign(Str& str, char* ch){
    if(str.ch){ // 如果传入的串有东西，就需要清空里面的东西
        free(str.ch);
    }
    int len = 0;
    char *c = ch;
    while(*c){ //求ch串的长度
        ++len;
        ++c;
    }
    if(len == 0){ //如果ch为空串，直接返回空串
        str.ch = NULL;
        str.length = 0;
        return 1;
    }
    else{
        str.ch = (char *)malloc(sizeof(char) * (len + 1));
        //取len+1是为了分配多一个空间存放\0字符
        if(str.ch == NULL){
            return 0;
        }
        else{
            c = ch;
            for (int i = 0; i <= len; ++i,++c){
                str.ch[i] = *c;
                str.length len;
                return 1;
            }
        }
    }
}

//取串的长度 get str.length
int strlength(Str str){
    return str.length;
}

 /** 
  * 比较操作 如果a的ASCII码 < b的ASCII码，则返回a < b标记
  * 如果a的ASCII码 > b的ASCII码，则返回 a > b标记
  * 相等的话，就按照之前条件比较两串中下一对字符
  **/

 int strcompare(Str s1,Str s2){
     for (int i = 0; i < s1.length && s2.length; i++){
         if(s1.ch[i] != s2.ch[i]){
             return s1.ch[i] - s2.ch[i];
         }
         return s1.length - s2.length;
     }
 }

 //串连接操作,将两个串合并为一个
 int concat(Str& str,Str s1,Str s2){
     if(str.ch){
         free(str.ch); //清除原串空间
         str.ch = NULL;
     }
     str.ch = (char *)malloc(sizeof(char) * (s1.length + s2.length + 1));
     if(str.ch == NULL){
         return 0;
     }
     int i = 0;
     while(i < s1.length){
         str.ch[i] = s1.ch[i];
         ++i;
     }

     int j = 0;
     while(j <= s2.length){
         str.ch[i + j] = s2.ch[j];
         ++j;
     }
     str.length = s1.length + s2.length; //新字符串长度是两个字符串的长度和
     return 1;
 }

 //寻找子串
 int subingstring(Str& substr,Str s1,Str s2,int pos,int len){
     /**
      * 首先判断子串位置,如果字串为小于0或者说子串位置大于等于字符串位置，说明没有子串
      * 好比str = "abc" pos > 5 或者说 pos = 2就找不到子串了。
      * */
     if (pos < 0 || pos >= substr.length || len < 0 || len > substr.length-pos){
         return 0;
     }
     if(substr.ch){
         free(substr.ch);
         substr.ch = NULL;
     }
     if(len == 0){
         substr.ch = NULL;
         substr.length = 0;
         return 1;
     }
     else{
         substr.ch = (char *)malloc(sizeof(char) * (len + 1));
         int i = pos;
         int j = 0;
         while(i < pos+len){
             substr.ch[j] = str.ch[i];
             ++i;
             ++j;
         }
         substr.ch[j] = '\0';
         stbstr.length = len;
         return 1;
     }
 }

 //清空串操作
 int clearstring(Str& str){
     if(str.ch){
         free(str.ch);
         str.ch = NULL;
     }
     str.length = 0;
     return 1;
 }