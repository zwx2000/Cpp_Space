#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

class Point3D
{
public:
    explicit Point3D(int x=0, int y=0, int z=0)
        :x_(x),y_(y),z_(z){}

    void dumpFormat()
    {
        cout<<"("<<x_<<","<<y_<<","<<z_<<")"<<endl;
    }

private:
    int x_;
    int y_;
    int z_;
};

class Point2D
{
public:
    Point2D(int x, int y)
        :x_(x),y_(y){}

    operator Point3D()
    {
        return Point3D(this->x_,this->y_,rand()%100);
    }

private:
    int x_;
    int y_;
};

Point3D convert(Point2D & d2)
{
    return Point3D(d2);
}

int main()
{
    srand(time(NULL));

    Point2D d2(1,2);
    Point3D d3;

    d3 = d2;

    d3.dumpFormat();

    return 0;
}
