#include <iostream>

using namespace std;

//ÑÆÔª

//int a = 10;
//a++ a++++ (a++) = 10

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
        cout<<"++a"<<endl;
        this->real++;
        this->image++;
        return *this;
    }

    const Complex operator++(int)
    {
        Complex r(*this);//¿½±´¹¹Ôì
        this->real++;
        this->image++;
        return r;
    }

private:
    double real;
    double image;
};

int main()
{
    int a = 10;
    cout<<"a++ = "<<a++<<endl;
    cout<<"a = "<<a<<endl;
//    cout<<"a++++ = "<<a++++<<endl;
    cout<<"a = "<<a<<endl;

    Complex c(10,0);
    c++;
    c.dumpFormat();
    return 0;
}
