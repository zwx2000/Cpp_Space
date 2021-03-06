#include <iostream>
#include <string.h>

using namespace std;

//构造器 constructor 构造机制

//1 与类名相同 在对象生成的时候自动调用
//2 无返回值，可以有参数
//3 可以有默认参数，可以被重载
//4 系统提供默认无参空体构造器，一经自实现，系统提供的默认不复存在
//  无论重载还是默认参数，应该把无参空体构造器包含进来
//  生成无参的对象，是一种比较常见的现象，对象数组


//10 1024
//1026 1024
class myStack
{
public:
//    myStack(){
//        top = 0;
//        space = new char[1024];
//        memset(space,0,1024);
//        spaceSize = 1024;
//    }

    myStack(int size = 1024){
        top = 0;
        space = new char[size];
        memset(space,0,size);
        spaceSize = size;
    }

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
    myStack s;

    for(char ch='a'; !s.isFull()&&ch<'z'; ch++)
    {
        s.push(ch);
    }
    while(!s.isEmpty())
        cout<<s.pop();

    cout<<endl<<"**********************"<<endl;

    myStack s2(10);
    for(char ch='a'; !s2.isFull()&&ch<'z'; ch++)
    {
        s2.push(ch);
    }
    while(!s2.isEmpty())
        cout<<s2.pop();

    return 0;
}
