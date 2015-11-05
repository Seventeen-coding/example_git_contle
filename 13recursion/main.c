//递归的思维是已知运算规律 去 推测某个结果

#include <stdio.h>
//实现某一个不清楚大小的数组 把他们以倒着形式打印出来
//类似 一个循环 先找到最后一个 倒着工作
void recursion_func(char *ar)
{
    printf("in my recursion ar:%08x *ar:%c\n",ar,*ar);
    if(*ar == NULL)
    {
        return;                //这时候到了ar指针指向最后一个字符的下一个位置
    }
    else
    {
        recursion_func(ar+1);  //不是空就找下一个
    }
    printf("%c\n",*ar);
}

int main(void)
{
    char ar[] = "hello";

    recursion_func(ar);

    return 0;
}

