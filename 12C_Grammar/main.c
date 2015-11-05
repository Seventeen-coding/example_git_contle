#include <stdio.h>

struct mystruct{
    int i;
    char c;
    float f;
};          //�ṹ������

//typdef ���ǰ�����������һ������
typedef struct mystruct mytype; //��mytype ���� struct mystruct

int main(void)
{
    //�����������޸ĵ�ֵ��
    //�����������޸ĵ�ֵ��
    //��������ָ��ֵ Ҳ����ָ��ַ��ָ�루����ֵ�Ǳ��˵�ַ���������ã�����ֵ���Լ��ĵ�ַ����

    //��������
    int i = 123;
    int *i_p = &i;   //&i_p��i_p�ĵ�ַ�����ֵ��i_p,Ҳ��&i���ֵ,   i���ֵ�ǵ�ַ   *i ��123�����ֵ
    //��ַ  ��   ֵ����ַҲ���Կ�����ֵ��
    //&i_p      i_p
    //i_p       &i
    //*i_p���ǵ�ַ
    //&i        i
    //i���ǵ�ַ

    char c = 'a';   //&c��װ'a'����ַ��ĵ�ַ�� c��'c'����ַ���Ҳ����ֵ�� û��*c
    float f;

    printf("&i_p: %08x \ti_p:%08x *i_p:%d\n",&i_p,i_p,*i_p);
    printf("&i: %08x \ti: %d\n",&i,i);
    printf("c:%c\n",c);
    printf("f:%f\n",f);                //û�г�ʼ����ֵ�������
    printf("========================\n");
    //�����ͬ���ͼ���(�ṹ�壩
    struct mystruct ms;
    ms.c = 's';
    ms.i = 11;
    ms.f = 0.2;
    mytype mt = {.i=10,.c='t',.f=0.1};           //�ڶ���mtʱ���ʼ��һЩֵ

    printf("i:%d\tc:%d\tf:%d\n",ms.i,ms.c,ms.f);
    printf("i:%d\tc:%c\tf:%f\n",mt.i,mt.c,mt.f);
    printf("========================\n");
    //�����ͬ���ͼ���(����)
    int ar[3] = {1,2,3};                //����װ3��int��С������
    char ar1[] = {'a','b','c'};         //����װ3��char��С������ �ڶ���ʱ�ſ��Բ�ָ����С
    //����֮�������������Ϊ��С

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
    //����������������Σ�����(ö��)

    enum{
        white,blue,yellow,black
    }color;
    printf("%d\t%d\t%d\n",white,blue,black);
    printf("========================\n");
    //�����ͬ������ͬ�������ÿռ�һ��ռ䣨���ϣ�
    union {
        int i;
        char c;
        float f;
    }uni;
    uni.i = 0x11223344;
    printf("i:%d\t c:%c\t f:%f\n",uni.i,uni.c,uni.f);
    printf("sizeof(uni):%d\n",sizeof(uni));

    //=============if=======��0��������=====================
    //��֧�ṹ
    printf("=============if=======��0��������=====================\n");
    printf("����һ���ַ�:");
    scanf("%c",&uni.c);
    if(uni.c == 'T')    //'X'Ϊ�ַ� "XXXX"�ַ���
    {
        printf("uni.c == 'T' is true\n");
    }
    else
    {
        printf("uni.c == 'T' is false\n");
    }

    //=============while=======��0��������=====================
    //ѭ���ṹ
    printf("=============while=======��0��������=====================\n");
    i = 0;
    while((color+i) != black)
    {
        printf("%d\n",color+i);
        i++;
    }

    i = 0;
    do
    {
        printf("%d\n",color+i);
        i++;
    }while((color+i) != black);
    //=============for=======�ڶ�������0��������=====================
    //ѭ���ṹ
    printf("=============for=======�ڶ�������0��������=====================\n");
    //�������Ҫһ����ȥ����
    for(i = 0;i<3;i++)
    {
        printf("%c\t",ar1[i]);
    }
    putchar('\n');


    return 0;
}

