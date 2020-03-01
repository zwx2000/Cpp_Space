#ifndef MYQUEUE_H
#define MYQUEUE_H

typedef struct _Node
{
    char data;
    struct _Node * next;
}Node;
//��ʽ�洢�У�ֻ������ͷβָ��
typedef struct _Queue
{
    Node *front;
    Node *rear;
}Queue;
//��ͷ�ڵ�
void initQueue(Queue * q);
int isQueueEmpty(Queue * q);
void enQueue(Queue * q,char dat);
char deQueue(Queue * q);
void clearQueue(Queue *q);


#endif // MYQUEUE_H
