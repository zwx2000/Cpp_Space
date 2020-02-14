#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi = {1,2,3,4,5,6,7};
    cout<<vi.size()<<endl;
    for(auto & i:vi)
        cout<<i<<endl;

    vector<int> vi2 = vi;
    for(auto & i:vi)
        cout<<i<<endl;

    return 0;
}
