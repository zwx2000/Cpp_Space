#include "mylist.h"
#include <iostream>

void myList::initList()
{
    head = new Node;
    head->next = nullptr;
}

void myList::insertList(int data)
{
    Node * cur = new Node;
    cur->data = data;

    cur->next = head->next;
    head->next = cur;
}

void myList::traverseList()
{
    Node * sh = head->next;
    while(sh)
    {
        std::cout<<sh->data<<std::endl;
        sh = sh->next;
    }
}

void myList::destroyList()
{
    Node * t;
    while(head)
    {
        t = head;
        head = head->next;
        delete t;
    }
}

Node * myList::searchList(int find)
{
    Node *cur = head;
    while(cur)
    {
        if(cur->data==find)
            return cur;
        else
            cur = cur->next;
    }
    return nullptr;
}

