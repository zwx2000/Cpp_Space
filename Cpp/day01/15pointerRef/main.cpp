#include <iostream>

using namespace std;

//ָ��������У����õ�ָ����

//void mySwap(char *p, char *q)
//{
//    char *t = p;
//    p = q;
//    q = t;
//}

void mySwap(char **p, char **q)
{
    char *t = *p;
    *p = *q;
    *q = t;
}

void mySwap(char * & pra,char * & prb)
{
    char *t = pra;
    pra = prb;
    prb = t;
}

int main()
{
    char * p = "china";
    char * q = "canada";

    cout<<"p = "<<p<<endl;
    cout<<"q = "<<q<<endl;

    mySwap(p,q);
    cout<<"p = "<<p<<endl;
    cout<<"q = "<<q<<endl;

    return 0;
}
