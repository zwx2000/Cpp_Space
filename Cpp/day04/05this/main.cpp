#include <iostream>

using namespace std;

//避免了形参与数据成员重名
//可以实现链式表达，串联

class Stu
{
public:
    Stu(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    ~Stu()
    {

    }
    Stu &growup()
    {
        this->age++;

        //内容型const
        Stu * const p = this;
//        this = nullptr;

        return *this;
    }
    void dis()
    {
        cout<<this->name<<endl;
        cout<<this->age<<endl;
    }

private:
    string name;
    int age;
};

int main()
{
    Stu s("zhangsan",100);
    s.dis();

    s.growup().growup().growup().growup();
    s.dis();

    return 0;
}

//int main()
//{
//    int a=10,b=30;
//    int * const p = &a;
//    cout<<*p<<endl;
//    *p = 20;
//    cout<<a<<endl<<b<<endl<<*p<<endl;
//    return 0;
//}

#if 0
//this 作为函数参数隐式传进来的,不占用对象的体积大小

class Stu
{
public:
    Stu()
    {
        cout<<this<<endl;
    }
    ~Stu()
    {
        cout<<this<<endl;
    }

    void dis()
    {
        cout<<this->age<<endl;
    }

private:
    int age;
};

int main()
{
    cout<<sizeof(Stu)<<endl;

    Stu s;
    s.dis();

    return 0;
}
#endif

#if 0
//this 指向当前对象的指针，在哪里可以用，
//这样用有什么好处，以什么样的形式存在

class Stu
{
public:
    Stu()
    {
        cout<<this<<endl;
    }
    ~Stu()
    {
        cout<<this<<endl;
    }

private:
    string name;
    int age;
};

int main()
{
    Stu s;
    cout<<&s<<endl;

    Stu s2;
    cout<<&s2<<endl;
    return 0;
}
#endif
