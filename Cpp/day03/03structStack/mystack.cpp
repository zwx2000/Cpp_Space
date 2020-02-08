#include "mystack.h"
#include <string.h>

//在类外定义成员函数，为了实现xxx.h x.cpp
//不能把它定义成全局，类名::进行限定

//::命名空间里用过，类名，本质也是一个命名空间

void myStack::init()
{
    top = 0;
    memset(space,0,1024);
}

bool myStack::isFull()
{
    return top == 1024;
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
