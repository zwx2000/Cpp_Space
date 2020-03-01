#include "myqueue.h"
#include <stdlib.h>

void initQueue(Queue * q)
{
    q->rear = q->front = (Node*)malloc(sizeof(Node));
    q->rear->next = NULL;
}

int isQueueEmpty(Queue * q)
{
    return q->rear == q->front;
}

void enQueue(Queue * q,char dat)
{
    Node * cur = (Node *)malloc(sizeof(Node));
    cur->data = dat;
    cur->next = q->rear->next;
    q->rear->next = cur;
    q->rear = cur;
}

char deQueue(Queue * q)
{
    if(q->front->next == q->rear)
    {
        //只有一个元素
        char t = q->front->next->data;
        q->front->next = q->front->next->next;
        free(q->rear);
        q->rear = q->front;
        return t;
    }
    else
    {
        //有多个元素
        char t = q->front->next->data;
        Node* pdel = q->front->next;
        q->front->next = q->front->next->next;
        free(pdel);
        return t;
    }
}

void clearQueue(Queue *q)
{
    Node * t = q->front;
    Node * cur;
    while(t)
    {
        cur = t->next;
        free(t);
        t = cur;
    }
    q->front = q->rear = NULL;
}
