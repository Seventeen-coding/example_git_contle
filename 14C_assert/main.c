//<assert.h>
//����
/*
 * Ψһ��Ŀ�����ṩ��assert�Ķ��塣
 * ������Է��棨expression==0����
 * �������ڱ�׼�����������ʾ��Ϣ��
 * ��ʹ�����쳣��ֹ���� abort()
 * ����һ������ �ж��Ƿ������������
 * ��Ҫ���ڵ��������Ƿ񳬳���Ԥ��
 * void assert (int expression);
 */

#include <stdio.h>
#include <assert.h>

int main(void)
{
    int a = 10,b;
    printf("������һ������");
    scanf("%d",&b);

    assert(a>b);            //����ʧ�ܵĻ��ǲ�������ִ��

    printf("���Գɹ�������û�б���ֹ\n�밴���������\n");
    getchar();

    return 0;
}

