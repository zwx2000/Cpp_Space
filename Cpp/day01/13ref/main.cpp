#include <iostream>

using namespace std;

//1. ������һ��������ϵ�������ٿռ䣬����Ҫ��ʼ�������ܵ������ڡ�
//�뱻�����ı���ӵ����ͬ����������
//2. ������ϵһ��ȷ�����ɱ��
//3. ���Զ������ٴ����ã�Ҳ���Ƕ�һ�����������Խ���������ã���ʱ
//���ü���һ��ƽ�й�ϵ
//4. ���& ��=���ң���˫Ŀ

int main()
{
    int a = 100; //���ٿռ�
    int & ra = a;

    cout<<"a = "<<a<<endl;
    cout<<"ra = "<<ra<<endl;
    cout<<"&a = "<<&a<<endl;
    cout<<"&ra = "<<&ra<<endl;
    cout<<"sizeof(a) = "<<sizeof(a)<<endl;
    cout<<"sizeof(ra) = "<<sizeof(ra)<<endl;

//    int b;
//    int & ra = b;

    int & xra = a;
    int & yra = a;
    int & zre = yra;

    //& ȡ��ַ ��λ�� ����

    double mm;
    double & rm = mm; // = &mm //a&b

    return 0;
}
