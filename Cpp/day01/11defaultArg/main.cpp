#include <iostream>
#include <time.h>
#include "mydefault.h"

using namespace std;

//Ĭ�Ϲ���
//1 �������󣬲�����Ծ
//2 ʵ�θ��� + Ĭ�ϲ������� >= �βεĸ���
//3 ������ʵ����һ���ʱ��Ĭ��
//  ��������ʵ�ֲ���һ��Ĭ�ϲ���������������




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
