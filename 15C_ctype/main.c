//<ctype.h> 字符类测试
/*<ctype.h>
 * 主要提供两类重要的函数：字符测试函数和字符大小转化函数。
 * 提供的函数中都以int类型为参数，并返回一个int类型的值。
 * 实参类型应该隐式转换或者显示转换为int类型。
 * int isalnum(int c); 判断是否是字母或数字。
 * int isalpha(int c); 判断是否是字母。
 * int iscntrl(int c); 判断是否是控制字符。
 * int isdigit(int c); 判断是否是数字。
 * int isgraph(int c); 判断是否是可显示字符。
 * int islower(int c); 判断是否是小写字母。
 * int isupper(int c); 判断是否是大写字母。
 * int isprint(int c); 判断是否是可显示字符。
 * int ispunct(int c); 判断是否是标点字符
 * int isspace(int c); 判断是否是空白字符
 * int isxdigit(int c); 判断字符是否为16进制。
 * int tolower(int c); 转换为小写字母。
 * int toupper(int c); 转换为大写字母。
 *
 * 主要是判断字符 或者 转换字符
 *
 */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char a = 'a',B = 'B',n = '\n';
    int  i = 'a',j = 1234;

    if(isalnum(a))
    {
        printf("这个是字母或数字\n");
    }

    if(isalpha(i))
    {
        printf("这个是字母\n");
    }

    if(iscntrl(n))
    {
        printf("这个是控制字符\n");
    }

    printf("小写转换：%c\t%c\n",B,tolower(B));
    printf("大写转换：%c\t%c\n",a,toupper(a));

    return 0;
}

