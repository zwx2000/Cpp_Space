#include <stdio.h>
#include"myqueue.h"

int main()
{
    Queue q;
    initQueue(&q);
    for(char i='a'; i<='z'; i++)
    {
        enQueue(&q,i);
    }
    while(!isQueueEmpty(&q))
    {
        printf("%c ",deQueue(&q));
    }
    clearQueue(&q);
    return 0;
}
