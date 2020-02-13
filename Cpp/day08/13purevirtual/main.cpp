#include <iostream>

using namespace std;

//���麯����virtual û��ʵ���� ������ʼ����Ϊ0
//���ӿ��࣬����߱���ӵ�д��麯�������д��麯�������Ϊ������ࡣ java Interface
//������� ����ʵ����
//���������޸�д������ȻΪ���飬��Ȼ����ʵ������

//�������� ��

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
