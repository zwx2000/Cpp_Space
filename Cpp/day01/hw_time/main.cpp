#include <iostream>
#include <time.h>
#include <windows.h>
#include <iomanip>

using namespace std;

int main()
{
    time_t now;
    tm *tm_now;
    while(1)
    {
        system("cls");
        time(&now);
        tm_now = localtime(&now);
        cout<<setfill('0')<<setiosflags(ios::right)<<setw(2)<<tm_now->tm_hour<<":"
           <<setw(2)<<tm_now->tm_min<<":"
          <<setw(2)<<tm_now->tm_sec<<endl;
        Sleep(100);
    }
    return 0;
}
