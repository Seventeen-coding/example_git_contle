//主要讨论数组 和 指针的区别
#include <stdio.h>

int main(void)
{
    //第一阶段 变量 和 指针i *i_p **i_pp

    //    long long int  i    = 10;
    //    long long int *i_p  = &i;
    //    long long int **i_pp = &i_p;
    int  i    = 10;
    int *i_p  = &i;
    int **i_pp = &i_p;
    printf("i      =   %d\t  &i  = %08X\n",i, &i);
    printf("*i_p   =   %d\t i_p  = %08X\t&i_p = %08X \n", *i_p, i_p, &i_p);
    printf("**i_pp =   %d\t*i_pp = %08X\ti_pp = %08X\t &i_pp = %08X\n", **i_pp,*i_pp, i_pp, &i_pp);
    // (int ***)   (int **)   (int *)   (int)
    //                         &i        i
    //              &i_p       i_p       *i_p
    // &i_pp        i_pp      *i_pp    **i_pp

    printf("sizeof(int)     %d\n",sizeof(int));
    printf("sizeof(int *)   %d\n",sizeof(int *));
    printf("sizeof(int **)  %d\n",sizeof(int **));
    printf("sizeof(int ***) %d\n",sizeof(int ***));
    printf("===================================================\n");
    //第二阶段 &i+1 &i_p+1 &i_pp+1 主要讨论地址
    printf("i     = %d   \ti+1   = %d\t (i+1)和i相差%d\n",i,i+1,(int)(i+1)-(int)i);
    printf("&i    = %08X \t&i+1  = %08X\t (&i+1)和&i相差%d\n",&i,&i+1,(int)(&i+1)-(int)&i);

    printf("i_p   = %08X \ti_p+1 = %08X\t (i_p+1)-i_p = %d \n",i_p,i_p+1,(int)(i_p+1)-(int)i_p);
    printf("&i_p  = %08X \t&i_p+1= %08X\t (&i_p+1)-&i_p = %d \n",&i_p, &i_p+1,(int)(&i_p+1)-(int)&i_p);

    printf("i_pp   = %08X \ti_pp+1 = %08X\t (i_pp+1)-i_pp = %d \n",i_pp,i_pp+1,(int)(i_pp+1)-(int)i_pp);
    printf("&i_pp  = %08X \t&i_pp+1= %08X\t (&i_pp+1)-&i_pp = %d \n",&i_pp, &i_pp+1,(int)(&i_pp+1)-(int)&i_pp);

    printf("===================================================\n");

    //第三阶段      数组 与 指针
    //               &c     c       *c
    //             &c_p    c_p     *c_p
    // &c_pp       c_pp   *c_pp   **c_pp
    char c[5] = {'a','b','c','d','e'};
    char *c_p = &c;
    char **c_pp = &c_p;

    printf("sizeof(char)     %d\n",sizeof(char));
    printf("sizeof(char *)   %d\n",sizeof(char *));
    printf("sizeof(char **)  %d\n",sizeof(char **));
    printf("sizeof(char ***) %d\n",sizeof(char ***));
    printf("===================================================\n");
    printf("&c   = %08x  \tc = %08x \t*c = %c\n",&c,c,*c);
    printf("&c_p = %08x  \tc_p = %08x \t*c_p = %c\n",&c_p,c_p,*c_p);
    printf("&c_pp = %08x \tc_pp = %08x \t*c_pp = %08x \t **c_p = %c\n",&c_pp,c_pp,*c_pp,**c_pp);
    printf("===================================================\n");

    //第四阶段 &c+1 &c_p+1 &c_pp+1 主要讨论地址

    printf("c     = %08x \tc+1   = %08x\t (c+1)和c相差%d\n",c,c+1,(int)(c+1)-(int)c);
    printf("&c    = %08X \t&c+1  = %08X\t (&c+1)和&c相差%d\n",&c,&c+1,(int)(&c+1)-(int)&c);

    printf("c_p   = %08X \tc_p+1 = %08X\t (c_p+1)-c_p = %d \n",c_p,c_p+1,(int)(c_p+1)-(int)c_p);
    printf("&c_p  = %08X \t&c_p+1= %08X\t (&c_p+1)-&c_p = %d \n",&c_p, &c_p+1,(int)(&c_p+1)-(int)&c_p);

    printf("c_pp   = %08X \ti_pp+1 = %08X\t (c_pp+1)-c_pp = %d \n",c_pp,c_pp+1,(int)(c_pp+1)-(int)c_pp);
    printf("&c_pp  = %08X \t&c_pp+1= %08X\t (&c_pp+1)-&c_pp = %d \n",&c_pp, &c_pp+1,(int)(&c_pp+1)-(int)&c_pp);

    //第五阶段 多维数组 和 指针

    //第六阶段 多维数组 和 指针 + 1


    //总结：指针+1 是加整个类型
    //单个变量没有指针
    //一位数组包含 一个一级的指针 和 一堆数据




    return 0;
}

