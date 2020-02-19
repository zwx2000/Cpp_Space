#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

class A
{
public:
    void print(int x,int y)
    {
        cout<<"x:"<<x<<endl;
        cout<<"y:"<<y<<endl;
    }
};

int main()
{
    A a;
    auto f = bind(&A::print,a,1,2);
    f();

    auto f1 = bind(&A::print,_1,_2,_3);
    f1(a,3,5);
    return 0;
}
