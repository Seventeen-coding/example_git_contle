#include <stdio.h>

/*
void是未知的，因此不能定义void变量，
void指针是说不知道这个地址后面多少是连
续的，但是指针本身的大小是4个字节，因此
可以定义void指针。
*/
int main(void)
{
    printf("int   空间大小:%d\n",sizeof(int));
    printf("long  空间大小:%d\n",sizeof(long));
    printf("char  空间大小:%d\n",sizeof(char));
    printf("float 空间大小:%d\n",sizeof(float));
    printf("double空间大小:%d\n",sizeof(double));
    printf("void  空间大小:%d\n",sizeof(void));
    printf("long long空间大小:%d\n",sizeof(long long));
    printf("short 空间大小:%d\n",sizeof(short));
    return 0;
}

