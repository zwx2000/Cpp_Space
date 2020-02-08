#ifndef MYSTACK_H
#define MYSTACK_H


class myStack
{
public:
    void init();
    bool isFull();
    bool isEmpty();
    void push(char ch);
    char pop();

private:
    int top;
    char space[1024];
};

#endif // MYSTACK_H
