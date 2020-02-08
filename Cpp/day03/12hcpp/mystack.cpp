#include "mystack.h"

myStack::myStack(int size)
    :top(0),
     spaceSize(size),
     space(new char[size]{0})
{}

myStack::~myStack()
{
   delete []space;
}

bool myStack::isFull()
{
    return top == spaceSize;
}

bool myStack::isEmpty()
{
    return top == 0;
}

void myStack::push(char ch)
{
    space[top++] = ch;
}
char myStack::pop()
{
    return space[--top];
}
