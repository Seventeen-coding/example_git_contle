/*<stdlib.h> 实用功能
 *<string.h> 字符串函数
 * 这两个函数包含了基本的数据处理功能
 * 是常用的函数
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(void)
{
    char str[]="123456";    //这个是字符串
    int i;

    //字符串函数
    i = atoi(str);
    printf("i   = %d\n",i);
    printf("i++ = %d\n",i++);
    i -= 1;                 //先还原
    printf("++i = %d\n",++i);

    //内存控制函数            （重点）
    //extern void *calloc(int num_elems, int elem_size);
    //为具有num_elems个长度为elem_size元素的数组分配内存
    int *i_p;                           //定义了一个指针 因为没指定空间这个是随机的地址 没有分配内存空间
    //*i_p = 10;                        //不行 因为这个是野指针 有可能访问不该访问的空间
    i_p = calloc(5,sizeof(int));        //i_p这个地址重新赋值了 指向一个由系统分配的空间
    //现在相当于定义了一个数组  int i_p[5];
    i_p[0] = 10;
    i_p[1] = 11;
    i_p[2] = 12;
    i_p[3] = 13;
    i_p[4] = 14;

    i = 0;
    for(;i<5;i++)
    {
        printf("%d\t",i_p[i]);
    }
    printf("\n");
    free(i_p);                          //不需要的时候需要手动释放内存

    //环境函数
    system("cls");
    char *s;
    s = getenv("PATH");                 //这个需要执行获取环境变量跟main的不同
    printf("%s",s);
    system("cls");
    //数学函数
    srand(1);                           //设置随机数种子 这个是伪随机 根据给的值产生不同的rand
    for(i=0; i<10; i++)
    {
        printf("%d\n", rand() % 100);   //随机数发生器
    }
    printf("======================================================\n");
    srand(2);                           //设置随机数种子 这个是伪随机 根据给的值产生不同的rand
    for(i=0; i<10; i++)
    {
        printf("%d\n", rand() % 100);   //随机数发生器
    }

    return 0;
}

/*
    stdlib.h
    宏：
    NULL 空
    EXIT_FAILURE 失败状态码
    EXIT_SUCCESS 成功状态码
    RAND_MAX rand的最大返回值
    MB_CUR_MAX 多字节字符中的最大字节数
    变量：
    typedef size_t是unsigned integer类型
    typedef wchar_t 一个宽字符的大小
    struct div_t 是结构体类型 作为div函数的返回类型
    struct ldiv_t是结构体类型 作为ldiv函数的返回类型
    函数：
    字符串函数
    atof(); 将字符串转换成浮点型数
    atoi(); 将字符串转换成整型数
    atol(); 将字符串转换成长整型数
    strtod(); 将字符串转换成浮点数
    strtol(); 将字符串转换成长整型数
    strtoul(); 将字符串转换成无符号长整型数

    内存控制函数
    calloc(); 配置内存空间
    free(); 释放原先配置的内存
    malloc(); 配置内存空间
    realloc(); 重新分配主存

    环境函数
    abort(); 异常终止一个进程
    atexit();设置程序正常结束前调用的函数
    exit(); 正常结束进程
    getenv(); 取得环境变量内容
    system(); 执行shell 命令

    搜索和排序函数
    bsearch(); 二元搜索
    qsort(); 利用快速排序法排列数组

    数学函数
    abs(); 计算整型数的绝对值
    div(); 将两个整数相除, 返回商和余数
    labs(); 取长整型绝对值
    ldiv();两个长整型数相除, 返回商和余数
    rand(); 随机数发生器
    srand(); 设置随机数种子

    多字节函数
    mblen(); 根据locale的设置确定字符的字节数
    mbstowcs(); 把多字节字符串转换为宽字符串
    mbtowc(); 把多字节字符转换为宽字符
    wcstombs(); 把宽字符串转换为多字节字符串
    wctomb(); 把宽字符转换为多字节字符
    ============================================================================
    string.h
    宏：
    NULL 空
    变量：
    typedef size_t
    函数：
    memchr();在某一内存范围中查找一特定字符
    memcmp(); 比较内存内容
    memcpy(); 拷贝内存内容
    memmove(); 拷贝内存内容
    memset(); 将一段内存空间填入某值
    strcat(); 连接两字符串
    strncat(); 连接两字符串
    strchr(); 查找字符串中第一个出现的指定字符
    strcmp(); 比较字符串
    strncmp();比较2个字符串的前N个字符
    strcoll(); 采用目前区域的字符排列比较字符串
    strcpy(); 拷贝字符串
    strncpy(); 拷贝字符串
    strcspn(); 返回字符连续不含指定字符的字符数
    strerror(); 返回错误原因的描述字符串
    strlen(); 计算字符串长度
    strpbrk(); 查找字符串中第一个出现的指定字符
    strrchr(); 查找字符串中最后出现的指定字符
    strspn();返回字符串连续不含指定字符的字符数
    strstr(); 在一字符串中查找指定的字符串
    strtok(); 分割字符串
    strxfrm(); 转换字符串
*/