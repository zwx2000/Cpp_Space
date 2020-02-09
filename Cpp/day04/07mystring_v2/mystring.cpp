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
    delete []_str;//[1]的原因
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

bool mystring::operator>(const mystring & another)
{
    return strcmp(this->_str,another._str) > 0;
}

bool mystring::operator>=(const mystring & another)
{
    return strcmp(this->_str,another._str) >= 0;
}

bool mystring::operator==(const mystring & another)
{
    return strcmp(this->_str,another._str) == 0;
}

bool mystring::operator<(const mystring & another)
{
    return strcmp(this->_str,another._str) < 0;
}

mystring & mystring::operator +=(const mystring & another)
{
    int catLen = strlen(this->_str);
    int srcLen = strlen(another._str);
    int len = srcLen+catLen;

    this->_str = static_cast<char*>(realloc(this->_str,len+1));
    memset(this->_str+catLen,0,srcLen+1);
    strcat(this->_str,another._str);

    return *this;
}

//栈对象是可以返回的
mystring mystring::operator +(const mystring & another)
{
    int len = strlen(this->_str) + strlen(another._str);
    mystring ms;
    delete []ms._str;
    ms._str = new char[len+1]{0};
    strcat(strcat(ms._str,this->_str),another._str);
    return ms;
}

char & mystring::at(int n)
{
    return _str[n];
}


char & mystring::operator[](const int n)
{
    return _str[n];
}

char * mystring::c_str()
{
    return _str;
}
