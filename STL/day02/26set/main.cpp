#include <iostream>
#include <set>

using namespace std;

int main()
{
    multiset<string,greater<string>> ss;
    ss.insert("a");
    ss.insert("b");
    ss.insert("c");
    ss.insert("d");
    ss.insert("e");
    ss.insert("e");

    for(auto & s:ss)
        cout<<s<<endl;


    return 0;
}
