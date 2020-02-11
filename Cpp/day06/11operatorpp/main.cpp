#include <iostream>

//��������
//���Ա���ֵ�����Է����Ա�������á�

using namespace std;

//cout<< ++a; cout<<a; ++a = 10; ++++a;

class Complex
{
public:
    Complex(double r=0, double i=0):real(r),image(i){}

    void dumpFormat()
    {
        cout<<"("<<this->real<<","<<this->image<<")"<<endl;
    }

    Complex & operator++()
    {
        this->real++;
        this->image++;
        return *this;
    }

private:
    double real;
    double image;
};

int main()
{
    int a = 10;
    cout<<++a<<endl;
    cout<<a<<endl;
    cout<<++++a<<endl;
    cout<<a<<endl;

    Complex c(10,0);
    ++c;
//    (++++c).dumpFormat();
    ((c.operator++()).operator++());
    c.dumpFormat();
    return 0;
}
