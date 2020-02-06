#include <iostream>

using namespace std;

//指针的引用有，引用的指针无
//引用的本质是对指针的包装，避免使用裸露的指针
//对于引用的指针类型，C++避免了对引用再次开封

int main()
{
    int a;
    int *p = &a;
    int &ra = a;
    int * &pra = p; //指针的引用
    int & *rpa = &ra;//引用的指针

    return 0;
}
