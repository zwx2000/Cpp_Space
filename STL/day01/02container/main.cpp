#include <iostream>
#include <vector>

using namespace std;

class A
{
public:
    A(){
        cout<<"无参构造函数"<<this<<endl;
    }

    A(int d = 100)
    {
        _data = d;
        cout<<"有参构造函数"<<this<<endl;
    }

    ~A()
    {
        cout<<"析构函数"<<endl;
    }

    A(const A & another)
    {
        cout<<this<<"构造拷贝自"<<&another<<endl;
    }

    A& operator=(const A & another)
    {
        cout<<this<<" 赋值拷贝自"<<&another<<endl;
    }

    int getData()
    {
        return _data;
    }

    void setData(int d)
    {
        _data = d;
    }

private:
    int _data;
};

int main()
{
    A a(10);
    cout << a.getData()<<endl;
    {
        vector<A> va;
        va.push_back(a);
        va[0].setData(20);

        cout << va[0].getData()<<endl;
    }
    cout << a.getData()<<endl;
    cout<<"+++++++++"<<endl;
    return 0;
}
