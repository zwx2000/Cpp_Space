#include <iostream>

extern "C"
{
    #include "mystr.h"
}

using namespace std;

//C++ ��ȫ����C���ԣ����C��Դ����ķ�ʽ���������±�����û�������
//������C��׼��һ����.so

// extern "C" ������������
// C++Ĭ�϶����к���������

int main()
{
    char *p = "china";
    int n = myStrlen(p);

    cout<<"n = "<<n<<endl;
    return 0;
}
