#include <iostream>
#include <string.h>

using namespace std;

#define SQR(x) ((x)*(x))//带参的宏 替换的思想

inline int sqr(int x)
{
    return x*x;
}

//宏函数的优点，内嵌，避免函数调用的开销，缺点：替换，代码膨胀
//普通函数的优点：抽象，实现一次书写，n次调用。缺点：有调用开销，类型检查
//inline函数，类型检查  内嵌

//inline register 建议型关键字
//短小，而频繁使用的函数，才有可能被编译器采纳为真正的inline函数。
//以牺牲代码段空间，提高程序的运行时间的效率

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
