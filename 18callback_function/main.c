//回调函数主要应用于两个程序员之间的接口对接

//例如 这个文件是主要逻辑数据结构的源文件
//我们的数据是知道的  看程序

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "link.h"


typedef struct {
    int id;
    int number;
    char name[10];
}student_t;

void show_student(const student_t *stu);
void init_link(link_t *h);
void printf_menu();
void new_std(student_t **stu);
int main(void)
{
    link_t head;
    init_link(&head);
    student_t *d;
    char loop = 1;
    while(loop)
    {
        system("cls");
        printf_menu();
        switch(getchar())
        {
        case '1':
            new_std(&d);
            add_to_link_tail(&head,d);
            printf("添加成功 请按任意键返回");
            getchar();
            getchar();
            break;
        case '3':
            travel_link(&head,show_student);
            printf("请按任意键返回");
            getchar();
            getchar();
            break;
        case 'q':
            loop = 0;
            break;
        }
    }
    return 0;
}

void printf_menu()
{
    printf("=================================\n");
    printf("===     1.添加学生            ===\n");
    printf("===     2.删除学生            ===\n");
    printf("===     3.查询学生            ===\n");
    printf("===     q.退出                ===\n");
    printf("=================================\n");
}
void show_student(const student_t *stu)
{
    printf("id:%d \t number: %d name: %s\n",stu->id,stu->number,stu->name);

}

void init_link(link_t *h)
{
    int *t_size;
    t_size = malloc(sizeof(student_t));
    h->data_p = t_size;
    h->next = NULL;
}

void new_std(student_t **stu)
{
    student_t *temp;
    temp = malloc(sizeof(student_t));
    printf("添加学生\n");
    printf("id:");
    scanf("%d",&temp->id);
    printf("number:");
    scanf("%d",&temp->number);
    printf("name:");
    scanf("%s",&temp->name);
    *stu = temp;
}
