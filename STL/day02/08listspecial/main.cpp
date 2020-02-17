#include <iostream>
#include <list>
#include <functional>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>

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

    friend bool operator<(const A&one, const A& another)
    {
        if(one._data < another._data)
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

//只有一个参数的时候 not1
//只有一个参数的时候 not2


int main()
{
    srand(time(NULL));
    list<A> la;
    for(int i=0; i<10; i++)
    {
        la.emplace_back(rand()%100);
    }

    la.sort(not2(less<A>()));

    for(auto &obj:la)
        obj.dump();

    return 0;
}

int main1()
{
//    greater<int>()(1,2);

    int arr[10] = {1,3,5,7,9,2,4,6,8,10};
    sort(arr,arr+10,greater<int>());
    for(auto &i: arr)
        cout<<i<<endl;

    vector<int> vi(arr,arr+10);
    sort(vi.begin(),vi.end(),less<int>());
    for(auto &i:vi)
        cout<<i<<endl;

    list<int> li(arr,arr+10);
    li.sort(greater<int>());

    for(auto &i:li)
        cout<<i<<endl;

    return 0;
}
