#include <iostream>
#include <time.h>
#include "mydefault.h"

using namespace std;

//默认规则
//1 从右往左，不能跳跃
//2 实参个数 + 默认参数个数 >= 形参的个数
//3 声明和实现在一起的时候，默认
//  若声明和实现不在一起，默认参数出现在声明中




int main()
{
    foo(2,3);
    foo(2,3,4);
}

#if 0
void weatherForcast(char * w="sunny")
{
    time_t t = time(0);
    char tmp[64];
    strftime( tmp, sizeof(tmp), "%Y/%m/%d %X %A ",localtime(&t) );
    cout<<tmp<< "today is weahter "<<w<<endl;
}

int main()
{
    //sunny windy cloudy foggy rainy
    weatherForcast();
    weatherForcast("rainny");
    weatherForcast();
    return 0;
}
#endif
