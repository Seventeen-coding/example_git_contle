#include <stdlib.h>
#include "link.h"
void add_to_link_tail(link_t *h,void *datap)
{
    link_t *new_note = malloc(sizeof(link_t));
    if(new_note == NULL)
    {
        perror("�����ڴ�ʧ��");
        return;
    }
    new_note->next = NULL;
    new_note->data_p = datap;
    link_t *temp = h;
    while(temp->next != NULL)
    {
            temp =  temp->next;
    }
    temp->next = new_note;

}

void travel_link(link_t *h,void (*func)(void *))
{
    if(h->next == NULL)
    {
        printf("û������\n");
        return;
    }
    link_t *data = h->next;

    for(;data != NULL;data = data->next)
    {
        func(data->data_p);         //ִ�д���ĺ���
    }
}

void del_tail()
{

}
