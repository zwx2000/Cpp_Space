#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//.erase(std::remove)  vector

int main()
{
    vector<int> vi = {1,2,3,4,5,6,7,8,9,10};

//    auto itr = vi.begin();

//    for(; itr != vi.end();)
//    {
//        if(*itr == 5)
//            itr = vi.erase(itr);
//        else
//            ++itr;
//    }

    cout<<vi.size()<<endl;
    for(auto &i:vi)
        cout<<i<<" ";
    cout<<endl;
    remove(vi.begin(),vi.end(),5),vi.end();
    cout<<vi.size()<<endl;
    for(auto &i:vi)
        cout<<i<<" ";
    cout<<endl;

    return 0;
}
