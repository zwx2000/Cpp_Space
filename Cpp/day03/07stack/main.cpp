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

    //initial list 初始化列表 完成初始化(数据成员) 效率很高
    //初始化列表初始化顺序，跟列表中的顺序无关
    //此列表中不要拿被初始化的成员去初始化其他

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
    //函数声明
//    myStack s(); // myStack ss;
    myStack s2(10);

    return 0;
}
