#include <iostream>
#include <hash_map>
#include <unordered_map>
#include <map>

using namespace std;

int main()
{
    map<const char *, int> mci;
    mci["name"] = 123;
    mci["blood"] = 345;

    for(auto &item : mci)
        cout << item.first << ":" << item.second << endl;

    unordered_map<const char *, int, hash<const char *>> hci;
    return 0;
}
