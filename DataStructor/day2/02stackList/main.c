#include <stdio.h>
#include "mystack.h"

int main()
{
    Stack s;

    initStack(&s);

    for(char ch = 'A'; ch <= 'Z'; ch++)
    {
        push(&s,ch);
    }

//    resetStack(&s);

    while(!isStackEmpty(&s))
    {
        printf("%c ",pop(&s));
    }

    clearStack(&s);

    return 0;
}
