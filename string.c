//定长顺顺序存储表示结构体
const int maxSize = 10000;
typedef struct{

    char str[maxSize + 1]; //+1是因为串的结尾有一个'\0'作为标记，串的长度要比数组长度少1，前提是同样的内容。
     char *ch;
    int length;
} Str;

