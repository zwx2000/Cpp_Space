#ifndef MYSTRING_H
#define MYSTRING_H

//默认参数做标记位

class mystring
{
public:
//    mystring();
//    mystring(char *s);

    mystring(const char *s = nullptr);
    ~mystring();
    mystring(const mystring & another);
    mystring & operator=(const mystring & another);


    void dump();

private:
    char *_str;
};

#endif // MYSTRING_H
