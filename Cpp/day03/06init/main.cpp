#include <iostream>
#include <string.h>

using namespace std;

//������ constructor �������

//1 ��������ͬ �ڶ������ɵ�ʱ���Զ�����
//2 �޷���ֵ�������в���
//3 ������Ĭ�ϲ��������Ա�����
//4 ϵͳ�ṩĬ���޲ο��幹������һ����ʵ�֣�ϵͳ�ṩ��Ĭ�ϲ�������
//  �������ػ���Ĭ�ϲ�����Ӧ�ð��޲ο��幹������������
//  �����޲εĶ�����һ�ֱȽϳ��������󣬶�������


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
