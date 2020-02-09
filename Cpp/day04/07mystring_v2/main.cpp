#include <iostream>
#include <string>
#include "mystring.h"
using namespace std;

int main()
{
//    string s;
//    string s1("china");
//    string s2(s1);
//    string s3 = s2;
//    string s4;
//    s4 = s3;
    string s = "china";
    string s1 = "ahina";
    if(s==s1)
        cout<<"=="<<endl;
    if(s>s1)
        cout<<">"<<endl;
    if(s<s1)
        cout<<"<"<<endl;
//    string s2 = s1+s;
//    cout<<s2<<endl;
//    s += s1;
//    cout<<s<<endl;
    cout<<s1.at(3)<<endl;
    cout<<s1[3]<<endl;
    cout<<s1.operator[](3)<<endl;

    cout<<s1.c_str()<<endl;

    cout<<"================="<<endl;

    mystring ms = "china ";
    mystring ms1 = "is good place.";
    mystring ms2 = "afafafaf";
    if(ms==ms1)
        cout<<"=="<<endl;
    if(ms>ms1)
        cout<<">"<<endl;
    if(ms<ms1)
        cout<<"<"<<endl;

    mystring ms3 = ms+ms1+ms2;
    ms3.dump();

//    (ms += ms1) = "abc";
//    ms.dump();

//    mystring ms;
//    mystring ms2 = "canada";
//    ms = ms2;
//    ms.operator=(ms2);
    cout<<ms1.at(3)<<endl;
    cout<<ms1[3]<<endl;

    cout<<ms1.c_str()<<endl;

    return 0;
}
