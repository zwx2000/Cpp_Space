#include <iostream>

using namespace std;

//纯虚函数，virtual 没有实现体 被“初始化”为0
//纯接口类，才配具备，拥有纯虚函数。含有纯虚函数的类称为抽象基类。 java Interface
//抽象基类 不能实例化
//子类中若无覆写，则依然为纯虚，依然不能实例化。

//析构函数 虚

class Shape
{
public:
    Shape(int x = 0, int y = 0)
        :_x(x),_y(y){
    }
    virtual void draw() = 0;
protected:
    int _x;
    int _y;
};

class Circle:public Shape
{
public:
    Circle(int x, int y, int r)
        :Shape(x,y),_radius(r){
    }

    virtual void draw()
    {
        cout<<"draw Circle from "<<"("<<_x<<","<<_y<<")"<<" radius:"<<_radius<<endl;
    }

protected:
    int _radius;
};

class Rect:public Shape
{
public:
    Rect(int x = 0, int y = 0, int w = 0, int l = 0)
        :Shape(x,y),_width(w),_length(l){}

    virtual void draw()
    {
        cout<<"draw Rect from "<<"("<<_x<<","<<_y<<")"
           <<" _width:"<<_width<<" _length"<<_length<<endl;
    }

protected:
    int _width;
    int _length;
};

int main()
{
    Shape *pa;
    return 0;
}
