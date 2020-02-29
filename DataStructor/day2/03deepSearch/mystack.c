#include "mystack.h"
#include <stdio.h>
#include <stdlib.h>

void initStack(Stack * s)
{
    s->top = (Node*)malloc(sizeof(Node));
    s->top->next = NULL;
}

int isStackEmpty(Stack * s)
{
    return s->top->next == NULL;
}

void push(Stack * s, Point ch)
{
    Node * cur = (Node *)malloc(sizeof(Node));
    cur->data = ch;

    cur->next = s->top->next;
    s->top->next = cur;
}

Point pop(Stack * s)
{
    Node * t = s->top->next;
    Point ch = t->data;

    s->top->next = t->next;
    free(t);

    return ch;
}

void resetStack(Stack * s)
{
    while(!isStackEmpty(s))
        pop(s);
}

void clearStack(Stack * s)
{
    resetStack(s);
    free(s->top);
}
