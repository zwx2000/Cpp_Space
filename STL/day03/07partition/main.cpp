#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isodd(int i )
{
    return (i%2) == 1;
}

int main()
{
    int data[10]={3,6,9,2,5,8,1,4,7,0};
    vector<int> vi(data,data+10);
    auto itr = partition(vi.begin(),vi.end(),isodd);
//    stable_partition(vi.begin(),vi.end(),isodd);

    cout<<*itr<<endl;

    sort(vi.begin(),itr,less<int>());

    for(auto i:vi)
    {
        cout<<i<<endl;
    }
    return 0;
}
