#include <stdio.h>
#include "myqueue.h"

int main()
{
    TreeNode a,b,c,d,f,j,k;
    TreeNode *root = &a;
    a._data = 'A';
    b._data = 'B';
    c._data = 'C';
    d._data = 'D';
    f._data = 'F';
    j._data = 'J';
    k._data = 'K';

    a._left = &b;
    a._right = &c;

    b._left = &d;
    b._right = NULL;

    d._left = d._right = NULL;

    c._left = &f;
    c._right = NULL;

    f._left = &j;
    f._right = &k;

    j._left = j._right = k._left = k._right = NULL;

    Queue q;
    initQueue(&q);

    enQueue(&q,root);

    while(!isQueueEmpty(&q))
    {
        TreeNode * t = deQueue(&q);
        printf("%c ",t->_data);

        if(t->_left)
            enQueue(&q,t->_left);
        if(t->_right)
            enQueue(&q,t->_right);
    }
    return 0;
}
