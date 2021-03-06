#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class Compare
{
public:
    bool operator()(int i, int j)
    {
        return i>j;
    }
};

class myCompare
{
public:
    bool operator()(int & v)
    {
        return v>5;
    }
};

int main()
{
    int arr[10] = {1,3,5,7,9,2,4,6,8,10};
    vector<int,allocator<int>> vi;   //����  allocator<int>->�ռ�������
    vi.assign(arr,arr+10);

    //������
    vector<int,allocator<int>>::iterator itr; //->������

//    for(itr = vi.begin(); itr != vi.end(); ++itr)
//    {
//        cout<<*itr<<endl;
//    }

    sort(vi.begin(),vi.end(),Compare());//Compare->�º���  sort->�㷨
    for(auto & i:vi)
        cout<<i<<endl;

    int count = count_if(vi.begin(),vi.end(),bind(greater<int>(),std::placeholders::_1,5));//count_if->�㷨

    cout<<"count = "<<count<<endl;

    return 0;

}
