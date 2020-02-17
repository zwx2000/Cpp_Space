#include <iostream>
#include <list>

using namespace std;

void dump(list<int> & li)
{
    for(auto & i:li)
        cout<<i<<endl;
    cout<<endl;
}

int main()
{
    list<int> li1 = {1,3,5,7,9};
    list<int> li2 = {2,4,6,8,10};

//    li1.splice(li1.begin(),li2);
//    li1.splice(li1.end(),li2,li2.begin());
//    auto itr = li1.begin();
//    advance(itr,2);
//    li1.splice(itr,li2,li2.begin(),li2.end());

//    li1.reverse();

    li1.sort();
    li2.sort();
    li1.merge(li2);

    cout<<"li1:"<<endl;
    dump(li1);
    cout<<"li2:"<<endl;
    dump(li2);

    return 0;
}
