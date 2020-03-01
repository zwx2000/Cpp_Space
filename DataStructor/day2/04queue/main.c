#include <stdio.h>
#include "myqueue.h"

int main()
{
//    int arr[10] = {1,3,5,7,9,2,4,6,8,10};

//    for(int i=0; i<100; i++)
//    {
//        printf("%d ",arr[i%10]);
//        if((i+1)%10 == 0)
//            putchar(10);
//    }

    Queue q;
    initQueue(&q,26);

    for(char ch = 'a'; ch <= 'z'; ch++)
    {
        if(!isQueueFull(&q))
            enQueue(&q,ch);
    }

    while(!isQueueEmpty(&q))
        printf("%c ",deQueue(&q));

    return 0;
}
