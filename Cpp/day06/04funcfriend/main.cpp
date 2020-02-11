#include <iostream>
#include <math.h>

using namespace std;

//��������ľ���
//ǰ������������
//ǰ����������һ�ֲ���ȫ���͵����������ܶ������
//���Զ���ָ������ã��������ͷ���ֵ�������ں��������С�

class Point;

class ManagePoint
{
public:
    float getDistance(const Point *p1, const Point *p2);
};

class Point
{
    friend float ManagePoint::getDistance(const Point *p1, const Point *p2);
public:
    Point(int x = 0,int y = 0)
        :x_(x),y_(y){}
    void dumpFormat()
    {
        cout<<"("<<x_<<","<<y_<<")"<<endl;
    }

private:
    float x_;
    float y_;
};

float ManagePoint::getDistance(const Point *p1, const Point *p2)
{
    float dx = p1->x_ - p2->x_;
    float dy = p1->y_ - p2->y_;

    return sqrt(dx*dx+dy*dy);
}


int main()
{
    Point p1(3,4);
    p1.dumpFormat();
    Point p2(7,8);
    p2.dumpFormat();
    ManagePoint mp;
    cout<<"dis:"<<mp.getDistance(&p1,&p2)<<endl;

    return 0;
}

#if 0
class Point;

class ManagePoint
{
public:
    float getDistance(const Point &p1, const Point &p2);
};

class Point
{
    friend float ManagePoint::getDistance(const Point &p1, const Point &p2);
public:
    Point(int x = 0,int y = 0)
        :x_(x),y_(y){}
    void dumpFormat()
    {
        cout<<"("<<x_<<","<<y_<<")"<<endl;
    }

private:
    float x_;
    float y_;
};

float ManagePoint::getDistance(const Point &p1, const Point &p2)
{
    float dx = p1.x_ - p2.x_;
    float dy = p1.y_ - p2.y_;

    return sqrt(dx*dx+dy*dy);
}


int main()
{
    Point p1(3,4);
    p1.dumpFormat();
    Point p2(7,8);
    p2.dumpFormat();
    ManagePoint mp;
    cout<<"dis:"<<mp.getDistance(p1,p2)<<endl;

    return 0;
}
#endif
