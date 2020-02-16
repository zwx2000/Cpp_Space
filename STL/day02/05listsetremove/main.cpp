#include <iostream>
#include <list>

using namespace std;

class A
{
public:
    A()
    {
        cout<<"无参构造函数"<<this<<endl;
    }
    A(int i):_data(i)
    {
        cout<<"有参构造函数"<<this<<endl;
    }
    A(const A & other)
    {
        this->_data = other._data;
        cout<<"拷贝构造"<<this<<" from "<<&other<<endl;
    }
    A& operator=(const A & other)
    {
        if(this==&other)
            return *this;
        this->_data = other._data;
        cout<<"拷贝赋值"<<this<<" from "<<&other<<endl;
        return *this;
    }
    ~A()
    {
        cout<<"析构函数"<<this<<endl;
    }

    friend bool operator==(const A & one, const A& another)
    {
        if(one._data == another._data)
            return true;
        else
            return false;
    }

    void dump()
    {
        cout<<_data<<endl;
    }

private:
    int _data;
};

void printl(list<int> & li)
{
    for(auto &i:li)
        cout<<i<<" ";
    cout<<endl;
}

int main()
{
    list<A> la;
    la.push_back(A(1));
    la.push_back(A(100));

    la.emplace(la.begin(),200);
    la.emplace_back(300);
    la.emplace_front(400);

    for(auto &obj:la)
        obj.dump();

    return 0;
}

int main1()
{
    int arr[5] = {9,99,999,9999,99999};
    list<int> li = {1,3,5,7,9};
//    li.insert(li.begin(),5,999);
    li.insert(li.begin(),arr,arr+5);

    printl(li);

    return 0;
}
