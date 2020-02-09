#include "mystring.h"
#include <string.h>
#include <iostream>

using namespace std;

//mystring::mystring()
//{
//    _str = new char[1];
//    *_str = '\0';
//}

//mystring::mystring(char *s)
//{
//    int len = strlen(s);
//    _str = new char[len+1];
//    strcpy(_str,s);
//}

mystring::mystring(const char *s)
{
    if(s == nullptr)
    {
        _str = new char[1];
        *_str = '\0';
    }
    else
    {
        _str = new char[strlen(s)+1];
        strcpy(_str,s);
    }
}

mystring::mystring(const mystring &another)
{
    _str = new char[strlen(another._str)+1];
    strcpy(_str,another._str);
}

mystring::~mystring()
{
    cout<<"~~~~~~"<<this<<endl;
    delete []_str;//[1]µÄÔ­Òò
}


void mystring::dump()
{
    cout<<_str<<endl;
}

mystring & mystring::operator=(const mystring & another)
{
    //this  another
    if(this==&another)
        return *this;

    delete []this->_str;

    int len = strlen(another._str);
    _str = new char[len+1];
    strcpy(_str,another._str);
}
