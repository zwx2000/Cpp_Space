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
    vector<A*> vap;
    vap.reserve(10);
    A *pa = new A;
    vap.push_back(pa);
    delete pa;

    return 0;
}
