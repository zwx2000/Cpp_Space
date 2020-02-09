#include <iostream>

using namespace std;

//中间变量

//栈上的对象是可以返回的，不可以返回栈上对象的引用

int func()
{
    int a = 3;
    return a;
}

int main()
{
    int i = 4;
    i = func();
    return 0;
}
