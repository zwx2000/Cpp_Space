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
    list<int> li = {1,3,5,7,9,2,4,6,8,10};

    cout<<li.front()<<endl;
    cout<<li.back()<<endl;

    printl(li);
    li.push_back(999);
    li.pop_back();
    li.push_front(999);
    li.pop_back();
    li.insert(li.begin(),99);
    li.erase(li.begin());
    printl(li);

    return 0;
}
