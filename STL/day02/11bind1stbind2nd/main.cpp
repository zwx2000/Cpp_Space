#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std::placeholders;
using namespace std;

struct mygreate
{
    int operator()(int x, int y)
    {
        cout<<"x:"<<x<<endl;
        cout<<"y:"<<y<<endl;
    }
};

//bind1st bind2nd
int main()
{
    vector<int> vi{1,2,3,11,22,33,44,55,66,77};
//    int count = count_if(vi.begin(),vi.end(),bind1st(greater<int>(),5));
//    int count = count_if(vi.begin(),vi.end(),bind2nd(greater<int>(),5));
    int count = count_if(vi.begin(),vi.end(),bind(greater<int>(),_1,10));
    cout<<"count:"<<count<<endl;
    return 0;
}
