#include <iostream>

using namespace std;

//����һ��ָ�룬ָ����ĳ�Ա����ָ�����ĳ�Ա

class Student
{
public:
    Student(string n, int nu):name(n),num(nu){}

    string name;
    int num;
};

int main()
{
    Student s("zhangsi",100);
    Student *ps = &s;

    Student ss("zhaoqi",200);
    Student *pss = &ss;

//    string *psn = &s.name; //����Ϊ �ƻ��˷�װ

    //���潲��ָ�룬��ָ��������ָ�룬�����Ƕ�������

    //Ҫ��ʹ�ã���Ҫ������Ķ��������ϵ

    string Student::*psn = &Student::name;
    cout<<s.*psn<<endl;
    cout<<ps->*psn<<endl;

    cout<<ss.*psn<<endl;
    cout<<pss->*psn<<endl;

    return 0;
}
