#ifndef MYQUEUE_H
#define MYQUEUE_H

typedef struct _Queue
{
    char *space_;
    int len_;
    int rear_;
    int front_;
}Queue;

void initQueue(Queue * q, int size);
int isQueueFull(Queue * q);
int isQueueEmpty(Queue * q);
void enQueue(Queue *q, char ch);
char deQueue(Queue * q);
void resetQueue(Queue * q);
void clearQueue(Queue * q);

#endif // MYQUEUE_H
