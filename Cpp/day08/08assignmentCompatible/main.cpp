#include <iostream>
#include <typeinfo>

using namespace std;

//1. ������Ķ�����Ը�ֵ���������
//2. ������Ķ�����Գ�ʼ�����������
//3. ���������ĵ�ַ���Ը���ָ������ָ��

class Shape
{
public:
    Shape(int x = 0, int y = 0)
        :_x(x),_y(y){

        cout<<"Shape=>"<<this<<endl;
        cout<<typeid (this).name()<<endl;
    }

    void draw()
    {
        cout<<"draw shape from "<<"("<<_x<<","<<_y<<")"<<endl;
    }

protected:
    int _x;
    int _y;
};


class Rect:public Shape
{

};

class Circle:public Shape
{
public:
    Circle(int x, int y, int r)
        :Shape(x,y),_radius(r){

        cout<<"Circle=>"<<this<<endl;
        cout<<typeid (this).name()<<endl;
    }

    void draw()
    {
        cout<<"draw Circle from "<<"("<<_x<<","<<_y<<")"<<"radius"<<_radius<<endl;
    }

protected:
    int _radius;
};

int main()
{
//    Shape s(1,2);
//    s.draw();

    Circle c(4,5,6);
//    c.draw();

//    s = c;
//    s.draw();

//    Shape & rs = c;
//    rs.draw();

    Shape * ps = &c;
    ps->draw();

//    double a;
//    char *p = &a;

//    char a;
//    double *pd = &a;
//    *pd = 100;

    return 0;
}
