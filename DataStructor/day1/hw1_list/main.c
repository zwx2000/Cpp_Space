#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct _Node
{
    int data;
    struct _Node * next;
}Node;

Node * CreateList()
{
    Node * head = (Node*)malloc(sizeof(Node));
    if(NULL==head)
        exit(-1);
    head->next = NULL;
    return head;
}

void InsertList(Node * head, int data)
{
    Node * cur = (Node*)malloc(sizeof(Node));
    cur->next = head->next;
    head->next = cur;
    cur->data = data;
}

Node * SearchList(Node * head, int data)
{
    head = head->next;
    while(head)
    {
        if(head->data==data)
            break;
        else
            head = head->next;
    }
    return head;
}

void DeleteList(Node * head, Node * pfind)
{
        while(head->next!=pfind)
            head = head->next;
        head->next = pfind->next;
        pfind->next = NULL;
        free(pfind);

//    if(pfind->next==NULL)
//    {
//        while(head->next!=pfind)
//            head = head->next;
//        head->next = NULL;
//        free(pfind);
//    }
//    else
//    {
//        pfind->data = pfind->next->data;
//        Node * t = pfind->next;
//        pfind->next = t->next;
//        free(t);
//    }
}

void TraverseList(Node * head)
{
    Node * cur = head->next;
    while(cur)
    {
        printf("%d ",cur->data);
        cur = cur->next;
    }
    putchar(10);
}

void ReverseList(Node * head)
{
    Node * p = head->next;
    Node * t;
    head->next = NULL;
    while(p)
    {
        t = p->next;
        p->next = head->next;
        head->next = p;
        p = t;
    }
}

int lenList(Node * head)
{
    int len = 0;
    while(head->next)
    {
        len++;
        head = head->next;
    }
    return len;
}

void popList(Node * head)
{
    //    Node *p, *q;
    //    int len = lenList(head);
    //    for(int i=0; i<len-1; i++)
    //    {
    //        p = head->next;
    //        q = p->next;
    //        for(int j=0; j<len-i-1; j++)
    //        {
    //            if(p->data>q->data)
    //            {
    //                p->data^=q->data;
    //                q->data^=p->data;
    //                p->data^=q->data;
    //            }
    //            p = p->next;
    //            q = q->next;
    //        }
    //    }
    Node *p, *q,*pre;
    int len = lenList(head);
    for(int i=0; i<len; i++)
    {
        pre = head;
        p = head->next;
        q = p->next;
        for(int j=0; j<len-i-1; j++)
        {
            if(p->data>q->data)
            {
                pre->next = q;
                p->next = q->next;
                q->next = p;
            }
            pre = pre->next;
            p = pre->next;
            q = p->next;
        }
    }
}

Node * FindMidNode(Node * head)
{
    Node * a = head;
    Node * b = head;
    while(b->next)
    {
        b = b->next->next;
        a = a->next;
    }
    return a;
}

int main()
{
    srand(time(NULL));
    Node * head = CreateList();
    for(int i=0; i<10; i++)
    {
        InsertList(head,rand()%10);
    }
    TraverseList(head);

    InsertList(head,3);
    printf("after insert:\n");
    TraverseList(head);

    Node * t = SearchList(head,8);
    DeleteList(head,t);
    printf("after delete:\n");
    TraverseList(head);

    Node * mm = FindMidNode(head);
    printf("The middle Node is: %d\n", mm->data);

    ReverseList(head);
    printf("after reverse:\n");
    TraverseList(head);

    popList(head);
    printf("after poplist:\n");
    TraverseList(head);
    return 0;
}
