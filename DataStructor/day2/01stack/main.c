#include <stdio.h>
#include "mystack.h"

int main()
{
    Stack s;
    initStack(&s,100);

    for(char ch = 'A'; ch <= 'Z'; ch++)
    {
        if(!isStackFull(&s))
            push(&s,ch);
    }

    resetStack(&s);

    while(!isStackEmpty(&s))
        printf("%c ",pop(&s));

    return 0;
}
