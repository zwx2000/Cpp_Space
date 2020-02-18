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
        pair<int,string>(5,"abcdef"),
        pair<int,string>(6,"abcdefg"),
        pair<int,string>(7,"abcdefgh"),
        pair<int,string>(8,"abcdefghi"),
        pair<int,string>(9,"abcdefghij"),
        pair<int,string>(10,"abcdefghijk")
    };

    auto loweritr = mis.lower_bound(5);
    auto upperitr = mis.upper_bound(7);

    cout<<"low:"<<loweritr->first<<" upper:"<<upperitr->first<<endl;

    //循环删除最好别用遍历的形式

//    for(auto itr = loweritr; itr != upperitr;)
//    {
//        itr = mis.erase(itr);
//    }

    mis.erase(loweritr,upperitr);

    map<int,string>::iterator itr;
    for(itr = mis.begin();itr != mis.end(); ++itr)
    {
    cout<<itr->first<<":"<<itr->second<<endl;
    }

    return 0;
}
