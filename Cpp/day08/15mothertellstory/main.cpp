#include <iostream>

using namespace std;

//Mother ������ Book  ����->���  -->�����

class IReader
{
public:
    virtual string getContents() = 0;
};

class Newspaper:public IReader
{
public:
    string getContents()
    {
        return "Trump Ҫ��ī����߾���һ��ǽ";
    }
};

class Book:public IReader
{
public:
    string getContents()
    {
        return "��ǰ����ɽ��ɽ�������������и�С���У����Ϻ��н����£���ǰ����ɽ";
    }
};

class EBook:public IReader
{
public:
    string getContents()
    {
        return "���Ĺ������� Ϲbb";
    }
};

class Mother
{
public:
    void tellStory(IReader *pi)
    {
        cout<<pi->getContents()<<endl;
    }
};

int main()
{
    Mother m;
    Book b;
    Newspaper n;
    EBook eb;
    m.tellStory(&b);
    m.tellStory(&n);
    m.tellStory(&eb);
    return 0;
}
