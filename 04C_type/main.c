#include <stdio.h>

/*
void��δ֪�ģ���˲��ܶ���void������
voidָ����˵��֪�������ַ�����������
���ģ�����ָ�뱾��Ĵ�С��4���ֽڣ����
���Զ���voidָ�롣
*/
int main(void)
{
    printf("int   �ռ��С:%d\n",sizeof(int));
    printf("long  �ռ��С:%d\n",sizeof(long));
    printf("char  �ռ��С:%d\n",sizeof(char));
    printf("float �ռ��С:%d\n",sizeof(float));
    printf("double�ռ��С:%d\n",sizeof(double));
    printf("void  �ռ��С:%d\n",sizeof(void));
    printf("long long�ռ��С:%d\n",sizeof(long long));
    printf("short �ռ��С:%d\n",sizeof(short));
    return 0;
}

