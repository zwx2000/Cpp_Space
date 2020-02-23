#include "list.h"
#include <stdio.h>

//带有头结点的链表。创建空链表
//所谓的指向，就是存了人家的地址。
Node * createList()
{
    Node * head = (Node *)malloc(sizeof(Node));
    if(head == NULL)
        exit(-1);
    head->next = NULL;
    return head;

}

void insertList(Node * head, int data)
{
    Node * cur = (Node*)malloc(sizeof(Node));
    cur->data = data;

    cur->next = head->next;
    head->next = cur;
}

void traverseList(Node * head)
{
    head = head->next;
    while(head)
    {
        printf("%2d ",head->data);
        head = head->next;
    }
}

int lenList(Node * head)
{
    int count = 0;
    head = head->next;
    while(head)
    {
        count++;
        head = head->next;
    }
    return count;
}

Node * searchList(Node * head, int find)
{
    head = head->next;
    while(head)
    {
        if(head->data == find)
            break;
        head = head->next;
    }
    return head;
}

void deleteList(Node * head, Node * pfind)
{
    if(pfind->next == NULL)
    {
        while(head->next != pfind)  //找前驱
            head = head->next;
        head->next = pfind->next;
        free(pfind);
    }
    else
    {
        pfind->data = pfind->next->data; // 直接用next的数据覆盖
        Node * t = pfind->next;
        pfind->next = t->next;
        free(t);
    }
}

void popSortList(Node * head)
{
    //交换数据
//    Node * p, * q;
//    int len = lenList(head);
//    for(int i=0; i<len-1; i++)
//    {
//        p = head->next;
//        q = p->next;
//        for(int j=0; j<len-1-i; j++)
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

    //交换指针
    Node * p, * q, *pre;
    int len = lenList(head);
    for(int i=0; i<len-1; i++)
    {
        pre = head;
        p = head->next;
        q = p->next;
        for(int j=0; j<len-1-i; j++)
        {
            if(p->data>q->data)
            {
                pre->next = q;
                p->next = q->next;  //注意：此过程中p与q交换了位置
                q->next = p;
            }
            pre = pre->next;        //保持原来的队形
            p = pre->next;
            q = p->next;
        }
    }
}

void reverseList(Node * head)
{
    Node * h = head->next;
    head->next = NULL;
    Node * t;
    while(h)
    {
        t = h->next;
        h->next = head->next;  //头插法
        head->next = h;
        h = t;
    }
}

void destroyList(Node * head)
{
    Node * t;
    while(head)
    {
        t = head->next;
        free(head);
        head = t;
    }
}
