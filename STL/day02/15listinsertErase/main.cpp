#include <iostream>
#include <list>
using namespace std;

//��Ҫ�ñ�����ʽɾ��

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
