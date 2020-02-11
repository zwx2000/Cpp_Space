#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

//转化构造函数的本质也是构造函数

//class mystring
//{
//public:
//    mystring(const char * s = nullptr);
//    mystring(const mystring & another);
//};

//explicit用于修饰构造函数

class Point2D
{
    friend class Point3D;
public:
    Point2D(int x, int y)
        :x_(x),y_(y){}

private:
    int x_;
    int y_;
};

class Point3D
{
public:
    explicit Point3D(int x=0, int y=0, int z=0)
        :x_(x),y_(y),z_(z){}

//    Point3D(const Point3D & d3);

    explicit Point3D(const Point2D & d2)   //Point2D -> Point3D  implicit
    {
        this->x_ = d2.x_;
        this->y_ = d2.y_;
        this->z_ = rand()%100;
    }

    void dumpFormat()
    {
        cout<<"("<<x_<<","<<y_<<","<<z_<<")"<<endl;
    }

private:
    int x_;
    int y_;
    int z_;
};

Point3D convert(Point2D d2)
{
    return Point3D(d2);
}

int main()
{
    Point3D p3;
    p3.dumpFormat();
    Point3D *p = new Point3D;
    p->dumpFormat();

    return 0;
}

int main1()
{
    srand(time(NULL));

    Point2D d2(10,100);
    Point3D d3 = static_cast<Point3D>(d2);
//    Point3D d3 = (Point3D)d2;
//    d3 = convert(d2);

    d3.dumpFormat();
    return 0;
}
