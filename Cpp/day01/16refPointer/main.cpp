#include <iostream>

using namespace std;

//ָ��������У����õ�ָ����
//���õı����Ƕ�ָ��İ�װ������ʹ����¶��ָ��
//�������õ�ָ�����ͣ�C++�����˶������ٴο���

int main()
{
    int a;
    int *p = &a;
    int &ra = a;
    int * &pra = p; //ָ�������
    int & *rpa = &ra;//���õ�ָ��

    return 0;
}
