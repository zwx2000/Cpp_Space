#include <iostream>

using namespace std;

//�����뷵��

class A
{
public:
    A()
    {
        cout<<"A()"<<endl;
    }
    ~A()
    {
        cout<<"~A()"<<endl;
    }
    A(const A & another)
    {
        cout<<"A(const A & another)"<<endl;
    }
};

void foo(A &a)
{

}

int main()
{
    A a;
//    A b(a);
//    A b = a;  Ҳ�ǿ�������

    foo(a);

    return 0;
}
