#include <iostream>
#include <list>

using namespace std;

void dump(list<int> & li)
{
    for(auto & i:li)
        cout<<i<<endl;
}

int main()
{
    list<int> li = {1,2,1,1,3,4,5,5,6,6,9,7,9};
//    li.sort();
    li.unique([](int x,int y) {
        if(x == y && y%2)
            return true;
        else
            return false;
    });
    dump(li);

    return 0;
}
