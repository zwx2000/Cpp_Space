#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vi = {1,3,5,7,8,2,4,6,9,20};

    random_shuffle(vi.begin(),vi.end());

    for(auto &i:vi)
        cout<<i<<endl;

    return 0;
}
