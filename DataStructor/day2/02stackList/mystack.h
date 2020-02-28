#ifndef __MYSTACK_H__
#define __MYSTACK_H__

typedef struct _Node
{
    char data;
    struct _Node *next;
}Node;

typedef struct _Stack
{
    Node * top;
}Stack;

void initStack(Stack * s);
int isStackFull(Stack * s);
int isStackEmpty(Stack * s);
void push(Stack * s, char ch);
char pop(Stack * s);
void clearStack(Stack * s);
void resetStack(Stack * s);

#endif
