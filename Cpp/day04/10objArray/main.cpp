#include <iostream>

using namespace std;

class Stu
{
public:
    Stu(){}
    Stu(string n):_name(n){}
    void init(string name)
    {
        _name = name;
    }
    void dis()
    {
        cout<<_name<<endl;
    }

private:
    string _name;
};

//������������100�����󣬾ͻᷢ��100�ι���

int main()
{
//    Stu s("zhangsi");

//    Stu sa[100];

//    Stu *ps = new Stu("abc");
//    Stu *ps = new Stu[2]{Stu("abc"),Stu("xxx")};
    Stu *ps = new Stu[100];

    for(int i=0; i<100; i++)
    {
        ps[i].init("");
    }
    return 0;
}
