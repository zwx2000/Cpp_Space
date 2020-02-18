#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,string > mis;
    mis = {
        pair<int,string>(1,"a"),
        pair<int,string>(2,"abc"),
        pair<int,string>(3,"abcd"),
        pair<int,string>(4,"abcde"),
        pair<int,string>(5,"a"),
        pair<int,string>(6,"b"),
        pair<int,string>(7,"c"),
        pair<int,string>(8,"d"),
        pair<int,string>(9,"abcdefghij"),
        pair<int,string>(10,"abcdefghijk")
    };

//    auto range = mis.equal_range(5);

    pair<map<int,string>::iterator,
            map<int,string>::iterator> range = mis.equal_range(5);

    cout<<"low:"<<range.first->first<<" upper:"<<range.second->first<<endl;
    cout<<"low:"<<range.first->first<<" :"<<range.first->second<<endl;
    cout<<"low:"<<range.first->first<<" :"<<range.second->second<<endl;

    return 0;
}
