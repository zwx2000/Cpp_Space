#include <iostream>

using namespace std;

//ָ�������У�����������

int main()
{
    int a,b,c;
    int * p[] = {&a,&b,&c};// int* p����int**
    int & q[] = {a,b,c};   // int& q����int&&

    return 0;
}
