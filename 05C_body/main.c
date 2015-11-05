//主要介绍基本的C编程的基本架构
#include <stdio.h>                      //01头文件

#define SIZE  40                        //宏定义 在预编译时进行字符替换紧紧是替换

void func1();                           //03函数和变量声明
int func2(int);                         //说白就是声明一个指针指向这个函数入口
                                        //函数声明可以不实现
int main(void)                          //04程序主体 main方法（函数）只有一个
{
    printf("func1指针：0x%08x\n",func1); //%08x  %代表一个参数 又右边依次传入 08
    func1();                            //就是这个东西占8个字符不足按0补 x以十六进制小写打印
    return 0;                           //返回值 这个值传给调用这个东西的地方 main返回到大环境
}

void func1()                            //05函数实现
{
    printf("in my func1");

}

