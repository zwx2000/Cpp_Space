#include <iostream>

using namespace std;

//传引用，等价于传作用域，把一个变量以引用的方式传到另外一个作用域
//，就等价于扩展了该变量的作用域

//void mySwap(int a, int b)
//{

//}

void mySwap(int *pa, int *pb)
{
    int t = *pa;
    *pa = *pb;
    *pb = t;
}

void mySwap(int &ra, int &rb)
{
    ra ^= rb;
    rb ^= ra;
    ra ^= rb;
}

int main()
{
    int a = 3;
    int b = 5;
//    mySwap(&a,&b);
//    int t = a;
//    a = b;
//    b = t;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    mySwap(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}
