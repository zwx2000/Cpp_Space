#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//双向循环链表

typedef struct _DNode
{
    int data;
    struct _DNode * next;
    struct _DNode * pre;
}DNode;

DNode * createList()
{
    DNode * head = (DNode*)malloc(sizeof(DNode));
    head->next = head->pre = head;
    return head;
}

void insertList(DNode * head, int data)
{
    DNode * cur = (DNode*)malloc(sizeof(DNode));
    cur->next = head->next;
    head->next = cur;
    cur->pre = head;
    cur->next->pre = cur;

    cur->data = data;
}

void traverseList(DNode * head)
{
    //正向
    DNode * t = head->next;
    while(t != head)
    {
        printf("%2d ",t->data);
        t = t->next;
    }

    //逆向
//    DNode * t = head->pre;
//    while(t != head)
//    {
//        printf("%2d ",t->data);
//        t = t->pre;
//    }
}

int main()
{
    DNode * head = createList();

    srand(time(NULL));
    for(int i=0; i<10; i++)
    {
        insertList(head,i);
    }
    traverseList(head);
    return 0;
}
