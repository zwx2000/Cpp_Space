#ifndef MYQUEUE_H
#define MYQUEUE_H

typedef struct _TreeNode
{
    char _data;
    struct _TreeNode * _left;
    struct _TreeNode * _right;
}TreeNode;

typedef struct _Node
{
    TreeNode * data;
    struct _Node * next;
}Node;
//链式存储中，只放两个头尾指针
typedef struct _Queue
{
    Node *front;
    Node *rear;
}Queue;
//带头节点
void initQueue(Queue * q);
int isQueueEmpty(Queue * q);
void enQueue(Queue * q,TreeNode * dat);
TreeNode * deQueue(Queue * q);
void clearQueue(Queue *q);


#endif // MYQUEUE_H
