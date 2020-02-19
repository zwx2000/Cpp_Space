#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> li = {1,2,3,4,5,6,7,8,9,10};

    auto itr = li.begin();

    cout<<*itr<<endl;

    auto itr2 = next(itr,2); //itr++
    cout<<*itr2<<endl;

    int n = distance(itr,itr2);
    cout<<n<<endl;
    return 0;
}
