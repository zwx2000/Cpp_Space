#include <iostream>
#include <vector>

using namespace std;

//resize > cursize push_back
//resize < cursize pop_back

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

    va.insert(va.begin(),A());

    return 0;
}

//int main1()
//{
//    vector<A> va;
//    va.reserve(100);

//    A a(1);
//    va.push_back(a);
//    va.push_back(a);
//    va.push_back(a);

//    {
//        va.resize(2); //push_back()
//    }
//    cout<<"==========="<<endl;
//    return 0;
//}
