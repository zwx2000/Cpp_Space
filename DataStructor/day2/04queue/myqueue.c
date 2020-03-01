#include "myqueue.h"
#include <stdlib.h>

void initQueue(Queue * q, int size)
{
    q->len_ = size;
    q->space_ = (char*)malloc(sizeof(char)*q->len_);
    q->rear_ = q->front_ = 0;
}

int isQueueFull(Queue * q)
{
    return (q->rear_+1)%q->len_ == q->front_;
}

int isQueueEmpty(Queue * q)
{
    return q->front_ == q->rear_;
}

void enQueue(Queue *q, char ch)
{
    q->space_[q->rear_] = ch;
    q->rear_ = ++q->rear_ % q->len_;
}

char deQueue(Queue * q)
{
    char ch = q->space_[q->front_];
    q->front_ = ++q->front_ % q->len_;
    return ch;
}

void resetQueue(Queue * q)
{
    q->front_ = q->rear_;
}

void clearQueue(Queue * q)
{
    free(q->space_);
}

