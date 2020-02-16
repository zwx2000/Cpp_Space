#include <iostream>
#include <list>

using namespace std;

void printl(list<int> & li)
{
    for(auto &i:li)
        cout<<i<<endl;
    cout<<endl;
}

int main()
{
    int arr[10] = {1,2,3,4};
    list<int> li(arr,arr+4);

    list<int> li2(li.begin(),li.end());
    printl(li);

    cout<<li2.size()<<endl;
    while(!li2.empty())
    {
        cout<<li2.back();
        li2.pop_back();
    }
    cout<<endl;
    cout<<li.size()<<endl;
    return 0;
}
