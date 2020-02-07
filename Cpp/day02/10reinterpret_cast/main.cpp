#include <iostream>

using namespace std;

int main()
{
    //Ë«²»Òş
    int *m; int n;
    m = reinterpret_cast<int*>(n);
    n = reinterpret_cast<int>(m);

    int arr[5] = {1,2,3,4,5};

    cout<<hex<<*((int*)((int)arr+1))<<endl;
    cout<<hex<<*((int*)((int)arr+1)+1)<<endl;
    cout<<hex<<*(reinterpret_cast<int*>(reinterpret_cast<int>(arr)+1)+1);

    return 0;
}
