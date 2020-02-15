#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi = {1,2,3,4,5,6,7,8,9,10};

//    auto itr = vi.insert(vi.begin(),100);
//    cout<<*itr<<endl;

    vector<int>::iterator itr;
    for(itr = vi.begin(); itr != vi.end(); )
    {
        if(*itr%2)
        {
            itr = vi.insert(itr,100);
            itr+=2;
        }
        else
            ++itr;
    }

    for(auto & i:vi)
        cout<<i<<endl;

    return 0;
}


int main1()
{
    vector<int> vi = {1,2,3,4,5,6,7,8,9,10};

    vector<int>::iterator itr;

//    for(int & i:vi)
//        cout<<i<<endl;

    for(itr = vi.begin(); itr != vi.end();)
    {
        if((*itr)%2)
        {
            itr = vi.erase(itr);
        }
        else
        {
            cout<<*itr<<endl;
             ++itr;
        }
    }

    return 0;
}
