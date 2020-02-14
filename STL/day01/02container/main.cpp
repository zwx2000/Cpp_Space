#include <iostream>
#include <vector>

using namespace std;

class A
{
public:
    A(){
        cout<<"�޲ι��캯��"<<this<<endl;
    }

    A(int d = 100)
    {
        _data = d;
        cout<<"�вι��캯��"<<this<<endl;
    }

    ~A()
    {
        cout<<"��������"<<endl;
    }

    A(const A & another)
    {
        cout<<this<<"���쿽����"<<&another<<endl;
    }

    A& operator=(const A & another)
    {
        cout<<this<<" ��ֵ������"<<&another<<endl;
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
