#include <stdio.h>
#include "list.h"
#include <stdlib.h>
#include <time.h>

int main()
{
    Node * head = createList();

    srand(time(NULL));
    for(int i=0; i<10; i++)
    {
        insertList(head,rand()%10);
    }
    traverseList(head);
    putchar(10);
    printf("length of List =  %d\n",lenList(head));

    Node * pfind = searchList(head,8);
    if(pfind != NULL)
    {
        printf("find in the list");
        deleteList(head,pfind);
        traverseList(head);
    }

    popSortList(head);
    printf("\nafter sort:\n");
    traverseList(head);

    reverseList(head);
    printf("\nafter reverse:\n");
    traverseList(head);

    destroyList(head);

    return 0;
}
