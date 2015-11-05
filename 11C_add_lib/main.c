#include <stdio.h>
#include "myhead.h"
//编译共享库.so（shared object）window下叫dll
//命令 需要在命令行打gcc -shared hello.c -o libhello.dll
//还有静态库.a
//gcc 是编译器 就是把C语言翻译成机器码的软件 具体操作输入命令 gcc --help
//gcc XXX.c -lhello     hello是我们编译出来的库
//这个说白了就是很多已经编译好的.o的集合 没有main函数 他们只提供很多函数接口给用户调用

int main(void)
{
    printf_hello();
    return 0;
}

