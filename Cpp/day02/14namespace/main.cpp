#include <iostream>

using namespace std;

namespace ONE
{
    int x = 4;
    int y = 20;
}

namespace  ANOTHER
{
    int x = 14;
}

//��һ�� ��
//�ڶ��� ����
//������ ����

int main()
{
    {
        int x = 250;
        cout<<ONE::x<<endl;
        cout<<ANOTHER::x<<endl;
        cout<<x<<endl;
    }

    {
        using ONE::x; //using �ͷ�������
        cout<<x<<endl;
//        using ANOTHER::x;
//        cout<<x<<endl;
    }

    {
        using namespace ONE;
        cout<<x<<y<<endl;
    }
    return 0;
}
