#include <iostream>

using namespace std;

//C++�е�ming�����ռ䣬���ǽ�ȫ�����������ռ��ٴλ��ֵĽ��

void foo()
{
    cout<<"foo"<<endl;
}

int mm = 100;

int main()
{
    int mm = 200;
    printf("mm = %d\n",mm);
    std::cout<<::mm<<endl;
    ::foo();
    return 0;
}
