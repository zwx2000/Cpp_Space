#include <iostream>

using namespace std;

//ϵͳ�ṩĬ�ϵĸ�ֵ��������أ�ǳ��ֵ
//��������У���������*���ɵĶѿռ䣬��ʱĬ��Ҳ�ǿ�����������ġ�
//��ʽ�ȽϹ̶� A& operator=(const A& another) ��ʵ�� Ĭ�ϼ�������

//��������д�����*���ɵĿռ�
struct Date
{
public:
    Date(int y=2020, int m=2, int d=9)
        :year(y),month(m),day(d){}

    Date& operator=(const Date& another)
    {
        this->year = another.year;
        this->month = another.month;
        this->day = another.day;
        return *this;
    }

    void dis()
    {
        cout<<"year"<<year
           <<"month"<<month
           <<"day"<<day<<endl;
    }

private:
    int year;
    int month;
    int day;
};

int main()
{
    Date d(2018,8,8);
    d.dis();

    Date d2(2019,9,9);
    d2 = d;
    d2.dis();

    Date d3;
//    d3 = d2 = d;
    d3.operator=(d2.operator=(d));
    return 0;
}
