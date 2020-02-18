#include <iostream>
#include <list>
using namespace std;

//不要用遍历方式删除

class A
{
//...
};

int main()
{
    list<A> li = {A(1),A(2)};
    {
        li.erase(li.begin());
    }
    cout<<"=================="<<endl;
    return 0;
}
