#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int,string,less<int>> mis = {
        pair<int,string>(1,"aaa"),
        pair<int,string>(2,"bbb"),
        pair<int,string>(3,"ccc"),
        pair<int,string>(4,"ddd"),
    };

    mis.insert(mis.find(100),pair<int,string>(100,"ddd"));
    mis.insert(mis.find(100),pair<int,string>(100,"ddd"));
    mis.insert(mis.find(100),pair<int,string>(100,"ddd"));

//    mis.erase(100);

//    auto itr = mis.find(10000);
//    if(itr!=mis.end())
//    {
//        mis.erase(itr);
//    }

//    mis.clear();

    map<int,string>::iterator itr;
    for(itr = mis.begin(); itr != mis.end(); ++itr)
    {
        cout<<itr->first<<":"<<itr->second<<endl;
    }

    cout<<mis.count(100)<<endl;

    return 0;
}
