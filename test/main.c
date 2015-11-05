#include <stdio.h>

int main(int argc,char *argv[])
{

    char ar[] = "123456";
    printf("%08x %08x %c\n",&ar,ar,*ar);

    int i = 100;
    printf("%08x %08x\n",&i,i);
    goto a;
    return 0;
    int *i_p = &i;
a:
    printf("%08x %08x %08x\n",&i_p,i_p,*i_p);


    return 0;
}

