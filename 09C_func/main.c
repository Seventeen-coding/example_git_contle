#include <stdio.h>

//两种方法
//第一种 先声明后实现
//第二种 直接实现（需要在main之前实现）
//必须要严格准函数传入参数格式
int func1(int arg);

int func2(int arg)
{
    printf("in func2\n");
    return arg;
}

int main(void)
{
    //思考一下这条语句实行的先后 以及传入的参数
    printf("func1 0x%08x: %d \nfunc2 0x%08X: %d \n",func1,func1(1),func2,func2(2));
    return 0;
}

int func1(int arg)
{
    printf("in func1\n");
}