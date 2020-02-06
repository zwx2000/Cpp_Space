#include <iostream>
#include <iomanip> //manipulate 管理

using namespace std;

// printf cout

int main()
{
    float f = 1.23456;
    // setprecision 单独使用 有效数字
    // setiosflags + setprecision 小数位数
    cout<<setprecision(4)<<setiosflags(ios::fixed)<<f<<endl;
}

#if 0
int main()
{
    float f = 1.234;
    //    域宽       对齐
    cout<<"***"<<setw(10)<<setiosflags(ios::left)<<f<<"****"<<endl;

    int a = 12;
    int b = 3;
    int c = 5; //12:03:05

    cout<<setfill('0')<<setw(2)<<a<<":"<<setw(2)<<b<<":"<<setw(2)<<c<<endl;
    return 0;
}
#endif


#if 0
int main()
{
    int data = 1234;

    cout<<data<<endl;
    cout<<hex<<data<<endl;
    cout<<oct<<data<<endl;
    cout<<dec<<data<<endl;
    return 0;
}
#endif
