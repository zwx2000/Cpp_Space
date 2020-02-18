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

    mis.insert(pair<int,string>(4,"eee"));
    mis.insert(map<int,string>::value_type(6,"fff"));
    mis.insert(make_pair<int,string>(7,"ggg"));
//    mis[4] = "xxx";
//    mis[100] = "yyy";

    map<int,string>::iterator itr;
    for(itr = mis.begin(); itr != mis.end(); itr++)
    {
        //        cout<<itr->first<<":"<<itr->second<<endl;
        cout<<(*itr).first<<":"<<(*itr).second<<endl;
    }

    mis.insert(pair<int,string>(8,"hhh"));

    cout<<mis.size()<<endl;
    return 0;
}
