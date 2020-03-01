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

void enQueue(Queue * q,TreeNode * dat)
{
    Node * cur = (Node *)malloc(sizeof(Node));
    cur->data = dat;
    cur->next = NULL;
    q->rear->next = cur;
    q->rear = cur;
}

TreeNode * deQueue(Queue * q)
{
    TreeNode * ch = q->front->next->data;
    if(q->front->next == q->rear)
    {
        //只有一个元素
        q->front->next = NULL;
        free(q->rear);
        q->rear = q->front;
    }
    else
    {
        //有多个元素
        Node* pdel = q->front->next;
        q->front->next = pdel->next;
        free(pdel);
    }
    return ch;
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
