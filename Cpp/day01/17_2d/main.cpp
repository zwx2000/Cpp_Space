#include <iostream>

using namespace std;

//ָ���ָ���У����õ������ޣ� ���Զ������ٴ�ȡ���ã�ƽ�й�ϵ

int main()
{
    int *p;
    int **pp = &p;
    int ***ppp = &pp;
    int ****pppp = &ppp;

    int a;
    int &ra = a;
    int &rb = ra;
    int &rc = rb;

//    int & & rra = ra;

    return 0;
}
