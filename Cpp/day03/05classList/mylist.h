#ifndef MYLIST_H
#define MYLIST_H

struct Node
{
    int data;
    struct Node *next;
};

class myList
{
public:
    void initList();
    void insertList(int data);
    Node * searchList(int find);
    void traverseList();
    void destroyList();

private:
    Node *head;
};
#endif // MYLIST_H
