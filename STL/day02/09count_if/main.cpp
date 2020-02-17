#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;
//class g
//{
//public:
//    bool operator()(const int& x) const
//    {
//        if(x>5)
//            return true;
//        else
//            return false;
//    }
//    typedef int argument_type;
//};

int main()
{
    vector<int> vi{1,2,3,4,5,6,7,8,9,10};

    int count = count_if(vi.begin(),vi.end(),
                         bind(greater<int>(),5,_1));
    cout<<count<<endl;
    return 0;
}
