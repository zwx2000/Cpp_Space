#include <iostream>

using namespace std;

//���������Ǳ����,��û�жѿռ�����У�Ĭ�ϵľͺã��ڶ����жѿռ�������£�����

//�������Զ����ã���ʲôʱ����ã���������ʱ

//1 ����ͬ�� �޲� �޷��� ǰ���һ��~
//2 �ڶ�������ǰ���Զ����ã����������ڴ���������(����Ѷ���)
//3 �ڶ�������ǰ��ջ�϶��󣬶��϶���

//4 ϵͳ�ṩһ������������

struct Date
{
public:
    Date(int y=0, int m=0, int d=0)
        :year(y),month(m),day(d)
    {}

private:
    int year;
    int month;
    int day;
};

int main()
{
    {
        Date d;
    }
    cout << "yyyyyyy" << endl;

    Date *pd = new Date;

    return 0;
}
