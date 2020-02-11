#include <iostream>

using namespace std;

int add(int &a, int &b)
{
    return a+b;
}

int add(const int &a, const int &b)
{
    return a+b;
}

class A
{
public:
    void display()
    {
        cout<<"hello,world"<<endl;
    }

    void display() const
    {
        cout<<"hello,world"<<endl;
    }
};

void fight(const A&a)

{
    cout<<"const"<<endl;
    a.display();
}

int main()
{
    int sum = add(2,3);
    A a;
    fight(a);
    return 0;
}
