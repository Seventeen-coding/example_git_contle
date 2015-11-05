#include <stdio.h>

struct mystruct{
    int i;
    char c;
    float f;
};          //结构体声明

typedef struct mystruct mytype; //用mytype 代替 struct mystruct

int main(void)
{
    //常量（不可修改的值）
    //变量（可以修改的值）
    //变量可以指数值 也可以指地址（指针（里面值是别人地址）或者引用（里面值是自己的地址））

    //单个类型
    int i = 123;
    int *i_p = &i;   //&i_p是i_p的地址里面的值是i_p,也是&i这个值,   i这个值是地址   *i 是123这个数值
                    //地址  的   值（地址也可以看成数值）
                    //&i_p      i_p
                    //i_p       &i
                    //*i_p不是地址
                    //&i        i
                    //i不是地址

    char c = 'a';   //&c是装'a'这个字符的地址， c是'c'这个字符（也是数值） 没有*c
    float f;

    printf("&i_p: %08x \ti_p:%08x *i_p:%d\n",&i_p,i_p,*i_p);
    printf("&i: %08x \ti: %d\n",&i,i);
    printf("c:%c\n",c);
    printf("f:%f\n",f);                //没有初始化的值是随机的
    printf("========================\n");
    //多个不同类型集合(结构体）
    struct mystruct ms;
    ms.c = 's';
    ms.i = 11;
    ms.f = 0.2;
    mytype mt = {.i=10,.c='t',.f=0.1};           //在定义mt时候初始化一些值

    printf("i:%d\tc:%d\tf:%d\n",ms.i,ms.c,ms.f);
    printf("i:%d\tc:%c\tf:%f\n",mt.i,mt.c,mt.f);
    printf("========================\n");
    //多个相同类型集合(数组)
    int ar[3] = {1,2,3};                //连续装3个int大小的数组
    char ar1[] = {'a','b','c'};         //连续装3个char大小的数组 在定义时才可以不指定大小
                                        //定义之后就以里面内容为大小

    for(i = 0;i<3;i++)
    {
        printf("%d\t",ar[i]);
    }
    putchar('\n');

    for(i = 0;i<3;i++)
    {
        printf("%c\t",ar1[i]);
    }
    putchar('\n');
    printf("========================\n");
    //多个连续变量（整形）集合(枚举)

    enum{
        white,blue,yellow,black
    }color;
    printf("%d\t%d\t%d\n",white,blue,black);
    printf("========================\n");
    //多个不同或者相同变量公用空间一块空间（联合）
    union {
        int i;
        char c;
        float f;
    }uni;
    uni.i = 0x11223344;
    printf("i:%d\t c:%c\t f:%f\n",uni.i,uni.c,uni.f);
    printf("sizeof(uni):%d\n",sizeof(uni));

    return 0;
}

