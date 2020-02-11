#include <iostream>

using namespace std;

class Mail
{
    friend class Sender;
public:
    Mail(string t, string c)
        :title_(t),contents_(c){}
private:
    string title_;
    string contents_;
};

class Sender
{
public:
    Sender(string addr)
        :addr_(addr){}

    Sender& operator<<(const Mail & mail)
    {
        cout<<mail.title_<<endl;
        cout<<mail.contents_<<endl;
        return *this;
    }

private:
    string addr_;
};

int main()
{
    Sender sender("guilin_wang@163.com");

    Mail mail("����","������׷ֺ���������");
    Mail mail2("֪ͨ","���ڳ������λ����֪ͨ");

    sender<<mail<<mail2;
    return 0;
}
