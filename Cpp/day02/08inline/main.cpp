#include <iostream>
#include <string.h>

using namespace std;

#define SQR(x) ((x)*(x))//���εĺ� �滻��˼��

inline int sqr(int x)
{
    return x*x;
}

//�꺯�����ŵ㣬��Ƕ�����⺯�����õĿ�����ȱ�㣺�滻����������
//��ͨ�������ŵ㣺����ʵ��һ����д��n�ε��á�ȱ�㣺�е��ÿ��������ͼ��
//inline���������ͼ��  ��Ƕ

//inline register �����͹ؼ���
//��С����Ƶ��ʹ�õĺ��������п��ܱ�����������Ϊ������inline������
//����������οռ䣬��߳��������ʱ���Ч��

int main()
{
    int i=0;
    while(i<5)
    {
        printf("%d\n",SQR(i++));
//        printf("%d\n",sqr(i++));
    }
    return 0;
}
