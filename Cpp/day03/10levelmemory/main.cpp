#include <iostream>
#include <cstring>

using namespace std;

struct Stu
{
    char *name;
    int age;
};

int main()
{
    Stu *ps = new Stu;
    ps->name = new char[1023];
    strcpy(ps->name,"XiaoLiang");
    ps->age = 19;

    delete []ps->name;
    delete ps;

    return 0;
}

int main2()
{
    Stu *ps = new Stu;
    strcpy(ps->name,"XiaoHong");
    ps->age = 16;
    delete ps;
    return 0;
}

int main1()
{
    Stu s;
    strcpy(s.name,"xiaoming");
    s.age = 18;
    return 0;
}
