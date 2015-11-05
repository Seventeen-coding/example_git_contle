#ifndef MYLINK_H
#define MYLINK_H


typedef struct link_t{
    void   *data_p;
    struct link_t *next;
}link_t;

void add_to_link_tail(link_t *h,void *datap);
void del_tail();
void travel_link(link_t *h,void (*func)(void *));

#endif // MYLINK_H

