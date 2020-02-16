#include <iostream>
#include <iterator>
#include <list>

using namespace std;

void dump(list<int> & li)
{
    for(auto &i:li)
        cout<<i<<" ";
    cout<<endl;
}

int main()
{
    list<int> li = {1,3,5,75,5,9};
//    list<int>::iterator itr = li.begin();
//    advance(itr,1);
//    li.erase(li.begin(),++li.begin());
//    li.erase(li.begin(),li.end());

//    li.remove(5);
    li.remove_if([](int x)
    {
        if(x>=6)
            return true;
        else
            return false;
    });

    dump(li);
    return 0;
}
