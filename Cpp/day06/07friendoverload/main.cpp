#include <iostream>

using namespace std;

//��Ԫ����,��ȫ�ֺ�������
//�����漰���Զ������ͣ���Ҫ����ͨ��������һ���Ĳ������飬����Ҫ����

class Complex
{
    friend Complex operator+(Complex &c1, Complex &c2);
//    friend Complex add(Complex &c1, Complex &c2);
public:
    Complex(double r=0, double i=0):real(r),image(i){}

    void dumpFormat()
    {
        cout<<"("<<this->real<<","<<this->image<<")"<<endl;
    }

    Complex operator+(Complex & another)
    {

    }

private:
    double real;
    double image;
};

//Complex operator+(Complex &c1, Complex &c2)
//{
//    Complex c;
//    c.real = c1.real + c2.real;
//    c.image = c1.image + c2.image;
//    return c;
//}

//Complex add(Complex &c1, Complex &c2)
//{
//    Complex c;
//    c.real = c1.real + c2.real;
//    c.image = c1.image + c2.image;
//    return c;
//}

int main1()
{
    Complex c1(3,4),c2(5,6);
    Complex sum = operator+(c1,c2);
    sum.dumpFormat();
    return 0;
}
