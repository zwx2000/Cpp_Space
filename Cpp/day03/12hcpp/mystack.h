#ifndef MYSTACK_H
#define MYSTACK_H


class myStack
{
public:
    myStack(int size = 1024);
    bool isFull();
    bool isEmpty();
    void push(char ch);
    char pop();
    ~myStack();

private:
    int top;
    char *space;
    int spaceSize;
};

#endif // MYSTACK_H
