//<assert.h>
//断言
/*
 * 唯一的目的是提供宏assert的定义。
 * 如果断言非真（expression==0），
 * 则程序会在标准错误流输出提示信息，
 * 并使程序异常中止调用 abort()
 * 设置一个条件 判断是否满足这个条件
 * 主要用于调试数据是否超出了预期
 * void assert (int expression);
 */

#include <stdio.h>
#include <assert.h>

int main(void)
{
    int a = 10,b;
    printf("请输入一个数：");
    scanf("%d",&b);

    assert(a>b);            //断言失败的话是不会往下执行

    printf("断言成功，程序没有被终止\n请按任意键返回\n");
    getchar();

    return 0;
}

