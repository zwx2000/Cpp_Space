#include <iostream>

using namespace std;

int main()
{
    const int a = 10;
    const int & ra = a;

    int b = 100;
    int &rb = b;
    const int &crb = b;
    return 0;
}
