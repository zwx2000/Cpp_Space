#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi = {1,3,5,6,7};
//    vector<int> ::iterator itr;
    vector<int>::reverse_iterator itr;
//    vector<int>::const_iterator itr;
//    vector<int>const_reverse_iterator itr;

    for(auto itr = vi.rbegin(); itr != vi.rend(); itr++)
    {
        cout<<*itr<<endl;
    }
    return 0;
}
