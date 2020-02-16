#include <iostream>
#include <list>

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
        this->_data = other._data;
        cout<<"��������"<<this<<" from "<<&other<<endl;
    }
    A& operator=(const A & other)
    {
        if(this==&other)
            return *this;
        this->_data = other._data;
        cout<<"������ֵ"<<this<<" from "<<&other<<endl;
        return *this;
    }
    ~A()
    {
        cout<<"��������"<<this<<endl;
    }

    friend bool operator==(const A & one, const A& another)
    {
        if(one._data == another._data)
            return true;
        else
            return false;
    }

private:
    int _data;
};

int main()
{
    list<A> li = {A(1),A(2),A(3),A(4)};
    list<A> li2 = {A(1),A(2),A(3),A(4)};

    if(li == li2)
        cout<<"=="<<endl;
    else
        cout<<"!="<<endl;


    return 0;
}

int main1()
{
    list<int> li = {1,2,3,4};
    list<int> li2 = {1,3,2,4};

    if(li == li2)
        cout<<"=="<<endl;
    else
        cout<<"!="<<endl;

    return 0;
}
