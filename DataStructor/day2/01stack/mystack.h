#ifndef __MYSTACK_H__
#define __MYSTACK_H__

typedef struct _stack
{
    int _len;
    int _top;
    char * _space;
}Stack;

void initStack(Stack * s, int size);
int isStackFull(Stack * s);
int isStackEmpty(Stack * s);
void push(Stack * s, char ch);
char pop(Stack * s);
void clearStack(Stack * s);
void resetStack();

#endif // MYSTACK_H
