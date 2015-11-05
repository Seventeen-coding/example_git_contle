//�ص�������ҪӦ������������Ա֮��ĽӿڶԽ�

//���� ����ļ�����Ҫ�߼����ݽṹ��Դ�ļ�
//���ǵ�������֪����  ������

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
            printf("��ӳɹ� �밴���������");
            getchar();
            getchar();
            break;
        case '3':
            travel_link(&head,show_student);
            printf("�밴���������");
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
    printf("===     1.���ѧ��            ===\n");
    printf("===     2.ɾ��ѧ��            ===\n");
    printf("===     3.��ѯѧ��            ===\n");
    printf("===     q.�˳�                ===\n");
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
    printf("���ѧ��\n");
    printf("id:");
    scanf("%d",&temp->id);
    printf("number:");
    scanf("%d",&temp->number);
    printf("name:");
    scanf("%s",&temp->name);
    *stu = temp;
}
