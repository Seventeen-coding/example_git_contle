#include <stdio.h>

//mian有多种入口
//第一种 int mian(void)
//第二种 int main(int argc,char **argv) 或者int main(int argc,char *argv[])
//第三种 int mian(int argc,char **argv,char** envp)
int main(int argc,char **argv,char** envp)
{
    if(argc == 1)
    {
        printf("usage:[.exe] [arg1] [arg2] ...\n");
        return 1;
    }
    printf("argc %d\n",argc);
    int i = argc;
    while(i != 1)
    {
        printf("%s\n",argv[i--]);
    }
    char **p = envp;
    for(;*p != NULL;p++)
    {
        printf("%s\n",*p);
    }

    return 0;
}

