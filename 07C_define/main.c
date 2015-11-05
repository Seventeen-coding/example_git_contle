#include <stdio.h>

//因为程序先进行预编译  所以 一些关键字和 变量不要跟宏冲突
#define  SIZE  10
#define  MAX(a,b)   (a>b)?a:b

int main(void)
{
    int i = SIZE * SIZE;
    printf("i = %d\n",i);
    int j = 200 ,max;
    printf("j = %d\n",j);
    max = MAX(i,j);
    printf("max = %d\n",max);
    return 0;
}

