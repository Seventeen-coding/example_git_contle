//<ctype.h> �ַ������
/*<ctype.h>
 * ��Ҫ�ṩ������Ҫ�ĺ������ַ����Ժ������ַ���Сת��������
 * �ṩ�ĺ����ж���int����Ϊ������������һ��int���͵�ֵ��
 * ʵ������Ӧ����ʽת��������ʾת��Ϊint���͡�
 * int isalnum(int c); �ж��Ƿ�����ĸ�����֡�
 * int isalpha(int c); �ж��Ƿ�����ĸ��
 * int iscntrl(int c); �ж��Ƿ��ǿ����ַ���
 * int isdigit(int c); �ж��Ƿ������֡�
 * int isgraph(int c); �ж��Ƿ��ǿ���ʾ�ַ���
 * int islower(int c); �ж��Ƿ���Сд��ĸ��
 * int isupper(int c); �ж��Ƿ��Ǵ�д��ĸ��
 * int isprint(int c); �ж��Ƿ��ǿ���ʾ�ַ���
 * int ispunct(int c); �ж��Ƿ��Ǳ���ַ�
 * int isspace(int c); �ж��Ƿ��ǿհ��ַ�
 * int isxdigit(int c); �ж��ַ��Ƿ�Ϊ16���ơ�
 * int tolower(int c); ת��ΪСд��ĸ��
 * int toupper(int c); ת��Ϊ��д��ĸ��
 *
 * ��Ҫ���ж��ַ� ���� ת���ַ�
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
        printf("�������ĸ������\n");
    }

    if(isalpha(i))
    {
        printf("�������ĸ\n");
    }

    if(iscntrl(n))
    {
        printf("����ǿ����ַ�\n");
    }

    printf("Сдת����%c\t%c\n",B,tolower(B));
    printf("��дת����%c\t%c\n",a,toupper(a));

    return 0;
}

