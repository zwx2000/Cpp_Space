#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void dis(vector<int> & vi)
{
    for(auto & i:vi)
        cout << i << " ";
    cout << endl;
}

int main()
{
    int arr[10] = {1,3,5,7,9,2,4,6,8,10};
    vector<int> vi(arr,arr+10);

    make_heap(vi.begin(),vi.end());
    dis(vi);
    vi.push_back(100);
    dis(vi);
    make_heap(vi.begin(),vi.end());
    dis(vi);

    pop_heap(vi.begin(),vi.end());
    cout << "pop node " << vi.back() << endl;
    vi.pop_back();
    dis(vi);

    sort_heap(vi.begin(),vi.end());

    dis(vi);

    return 0;
}
