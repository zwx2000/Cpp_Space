#include <iostream>
#include <vector>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"�޲ι��캯��"<<this<<endl;
    }
    A(int i):_data(i)
    {
        cout<<"�вι��캯��"<<this<<endl;
    }
    A(const A & other)
    {
        cout<<"��������"<<this<<" from "<<&other<<endl;
    }
    A& operator=(const A & other)
    {
        cout<<"������ֵ"<<this<<" from "<<&other<<endl;
    }
    ~A()
    {
        cout<<"��������"<<this<<endl;
    }

private:
    int _data;
};

int main()
{
    vector<A> va;
    va.reserve(10);
    A a(1);
    va.push_back(a);
    va.push_back(a);
    va.push_back(a);

    //��Ч
    //    va.push_back(a);
    //    {
    //        va.insert(va.end(),a);
    //        cout<<"==============="<<endl;
    //    }

    cout<<"==========="<<endl;
    {
        va.erase(va.begin());
        cout<<"+++++++++++++++++"<<endl;
    }
    return 0;
}
