#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

int main()
{
    vector<int> vi = {1,5,6,7,8,9};

    int count = count_if(vi.begin(),vi.end(),bind(greater<int>(),_1,5)); // x>=5
    cout<<count<<endl;

    count = count_if(vi.begin(),vi.end(),bind(greater<int>(),5,_1));
    cout<<count<<endl;

    //´óÓÚ5
    count = count_if(vi.begin(),vi.end(),bind1st(greater<int>(),5,_1));
    cout<<count<<endl;

    count = count_if(vi.begin(),vi.end(),bind2nd(greater<int>(),5,_1));
    cout<<count<<endl;

    return 0;
}
