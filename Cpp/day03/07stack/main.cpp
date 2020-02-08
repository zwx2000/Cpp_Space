#include <iostream>
#include <string.h>

using namespace std;

class myStack
{
public:
//    myStack(){
//        top = 0;
//        space = new char[1024];
//        memset(space,0,1024);
//        spaceSize = 1024;
//    }

    //initial list ��ʼ���б� ��ɳ�ʼ��(���ݳ�Ա) Ч�ʺܸ�
    //��ʼ���б��ʼ��˳�򣬸��б��е�˳���޹�
    //���б��в�Ҫ�ñ���ʼ���ĳ�Աȥ��ʼ������

    myStack(int size = 1024)
        :top(0),
         spaceSize(size),
         space(new char[size]{0})
    {}

    bool isFull();
    bool isEmpty();
    void push(char ch);
    char pop();

private:
    int top;
    char *space;
    int spaceSize;
};

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


int main()
{
    //��������
//    myStack s(); // myStack ss;
    myStack s2(10);

    return 0;
}
