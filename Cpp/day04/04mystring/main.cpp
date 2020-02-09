#include <iostream>
#include <string>
#include "mystring.h"
using namespace std;

//本质是对char *的包装

int main()
{
    string s;           //空串""        1
    string s1("china"); //非空串"china" 5+1
    cout<<s<<endl;
    cout<<s1<<endl;

    string s3 = s1;
    cout<<s3<<endl;

    string s4;
    s4 = s3;

    cout<<"++++++++++++++++++++"<<endl;
    mystring ms;
    cout<<"&ms:"<<&ms<<endl;
    mystring ms1("china");
    cout<<"&ms1:"<<&ms1<<endl;
    ms.dump();
    ms1.dump();

    mystring ms3(ms1);
    cout<<"&ms3:"<<&ms3<<endl;
    ms3.dump();

    return 0;
}
