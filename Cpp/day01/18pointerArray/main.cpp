#include <iostream>

using namespace std;

//指针数组有，引用数组无

int main()
{
    int a,b,c;
    int * p[] = {&a,&b,&c};// int* p代表int**
    int & q[] = {a,b,c};   // int& q代表int&&

    return 0;
}
