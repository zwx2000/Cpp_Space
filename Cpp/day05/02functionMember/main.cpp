#include <iostream>

using namespace std;

//һ��������ռ�Ŀռ��Сֻȡ���ڸö��������ݳ�Ա��ռ�Ŀռ䣬�����Ա�����޹�

//��ĳ�Ա����ֻ��һ�ݣ��ڶ�����ù����У��������ĵ�ַ��������Ա���Ϊthis
class Time {
public:
    Time(int h,int m,int s)
        :hour_(h),minute_(m),sec_(s){}
    void dis(Time *t)
    {
//        cout<<hour_<<minute_<<sec_<<endl;

//        cout<<this->hour_<<this->minute_<<this->sec_<<endl;

        cout<<t->hour_<<t->minute_<<t->sec_<<endl;
    }
private:
    int hour_;
    int minute_;
    int sec_;
};
int main()
{
    cout<<sizeof(Time)<<endl; //12

    Time t1(1,2,3);t1.dis(&t1);
    Time t2(4,5,6);t2.dis(&t2);
    Time t3(7,8,9);t3.dis(&t3);

    return 0;
}
