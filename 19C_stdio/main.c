/*<stdio.h>ͷ�ļ��������������������ĺ��������ͺͺꡣ
 * ����Ҫ�����������������ļ�ָ���FILE�������������õ������� size_t
 * ��fpos_t��size_t���������sizeof�������޷��������ͣ�fpos_t����
 * �����ܹ�Ψһ˵���ļ��е�ÿ��λ�õĶ�����ͷ�� ����������õĺ���
 * EOF����ֵ�����ļ��Ľ�β��
 */


#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stddef.h>
//�����window ƽ̨�� ��Ҫ��������ȡ��׼���� ��Ҫ���� conio.h
//��window����Ҫ��getch �����ctrl ���޷����
//����linux �����ڿ���̨�������� stty XXX
/* ����һ���������*/
char outbuf[BUFSIZ];   //#define BUFSIZ 512

//char outbuf[10];
int main(void)
{
#if 0
    char c;
    c = getch();
    while (c != '0') {
        c = getch();
        printf("%d\n",c);
    }
#endif

    //��������
    //setbuf(stdout, outbuf);     //�������˾���� ���� ͨ��fflush

    //    puts("This is a test of buffered output.\n\n");
    //    puts("This output will go into outbuf\n");
    //    puts("and won't appear until the buffer\n");
    //    puts("fills up or we flush the stream.\n");

    /* ���Գ���ע��һ��fflush��2�߲�һ�� */
    //    fflush(stdout);
    //    memset(outbuf,'0',sizeof(outbuf));
    printf("============================\n");
    printf("%s",outbuf);

    //�򿪹رն�д�ļ�
    FILE *f_p;
    int ret;
    f_p = fopen("./test.txt","a+");
    ret = fread(outbuf,sizeof(char),BUFSIZ,f_p);
    printf("%d\n",ret);
    printf("%s",outbuf);

    char ar[10] = "seventeen";
    fwrite(&ar,sizeof(char),10,f_p);


    int i = 10; char j = 'g';float k = 0.123;
   // vfprintf(f_p,"%d %c %f",i,j,k); �������
    return 0;
}

/*
 * ������
    typedef size_t
    typedef FILE
    typedef fpos_t

    ���� ��
    NULL ��ֵ
    _IOFBF ��ʾ��ȫ����
    _IOLBF ��ʾ�߻���
    _IONBF ��ʾ�޻���
    BUFSIZ setbuf������ʹ�õĻ������Ĵ�С
    EOF EOF�Ǹ�������ʾEND OF FILE
    FOPEN_MAX (20)ͬʱ�򿪵��ļ����������
    FILENAME_MAX �ļ�������󳤶�
    L_tmpnam��������󳤶ȵ���ʱ�ļ���
    SEEK_CURȡ��Ŀǰ�ļ�λ��
    SEEK_END����дλ���Ƶ��ļ�βʱ
    SEEK_SET����дλ���Ƶ��ļ���ͷ
    TMP_MAXtmpnam������
    stderr��׼��������Ĭ��Ϊ��Ļ, ��������ļ���
    stdin��׼��������Ĭ��Ϊ����
    stdout��׼�������Ĭ��Ϊ��Ļ

    ���к�����

    clearerr(); ��λ�����־
    fclose(); �ر�һ������
    feof(); ����ļ�������
    ferror(); ������Ƿ��д���
    fflush();���»�����
    fgetpos(); �ƶ��ļ����Ķ�дλ��
    fopen();���ļ�
    fread(); ���ļ�����ȡ����
    freopen(); ���ļ�
    fseek(); �ƶ��ļ����Ķ�дλ��
    fsetpos();��λ���ϵ��ļ�ָ��
    ftell(); ȡ���ļ����Ķ�ȡλ��
    fwrite(); ������д���ļ���
    remove(); ɾ���ļ�
    rename(); �����ļ����ƻ�λ��
    rewind(); �����ȡĿ¼��λ��Ϊ��ͷλ��
    setbuf(); �ѻ�������������
    setvbuf(); �ѻ������������
    tmpfile(); ��wb+��ʽ����һ����ʱ�������ļ�
    tmpnam(); ������һ��Ψһ���ļ���
    fprintf(); ��ʽ������������ļ�
    fscanf(); ��ʽ���ַ�������
    printf(); ��ʽ���������
    scanf(); ��ʽ���뺯��
    sprintf(); ��ʽ���ַ�������
    sscanf(); ��ʽ���ַ�������
    vfprintf(); ��ʽ������������ļ�
    vprintf(); ��ʽ���������
    vsprintf(); ��ʽ���ַ�������
    fgetc(); ���ļ��ж�ȡһ���ַ�
    fgets(); �ļ��ж�ȡһ�ַ���
    fputc(); ��һָ���ַ�д���ļ�����
    fputs(); ��һָ�����ַ���д���ļ���
    getc(); ���ļ��ж�ȡһ���ַ�
    getchar(); �ɱ�׼�����豸�ڶ���һ�ַ�
    gets(); �ɱ�׼�����豸�ڶ���һ�ַ���
    putc(); ��һָ���ַ�д���ļ���
    putchar(); ��ָ�����ַ�д����׼����豸
    puts(); ��һ�ַ�������stdout��
    ungetc(); ����ָ���ַ�д���ļ�����
    perror(); ��ӡ������ԭ����Ϣ�ַ���
*/
