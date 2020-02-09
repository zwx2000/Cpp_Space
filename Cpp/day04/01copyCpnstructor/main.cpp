#include <iostream>

using namespace std;

//����ͨ��ֵ��������ɹ��� constructor
//��ͬ�������������ɹ��� copy constructor

//copy constructor
//1 ϵͳ�ṩ��Ĭ�ϵĿ�������������ʽ�ȽϹ̶�,һ��ʵ�֣���������
//2 �˿��������������ǿյġ��ṩ��һ����λ��������
//3 ϵͳ�ṩ��Ĭ�Ͽ�������������һ��ǳ������shallow copy
//4 deep copy

struct Date
{
public:
    Date(int y=2020, int m=2, int d=9)
        :year(y),month(m),day(d){}

//    Date(const Date &another)
//    {
//        year = another.year;
//        month = another.month;
//        day = another.day;
//    }

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
    int a = 0; //��ʼ��
    a = 5;     //��ֵ
    int b = a;

    Date d(2020,2,2);
    d.dis();

    Date dd(d);
    d.dis();

    cout<<sizeof(d)<<sizeof(dd)<<endl;

    return 0;
}
