#include "mystack.h"
#include <string.h>

//�����ⶨ���Ա������Ϊ��ʵ��xxx.h x.cpp
//���ܰ��������ȫ�֣�����::�����޶�

//::�����ռ����ù�������������Ҳ��һ�������ռ�

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
