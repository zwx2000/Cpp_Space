#include <iostream>
#include <vector>

using namespace std;

//capacity >= size
//resize size的大小 capacity只会变大不会变小
//capacity > size => capacity = size

//预留空间 而不是申请空间
//reserve 预留空间，而不构造，resize 一定能够会发生构造和析构行为

int main()
{
    vector<int> vi = {1,2,3,4,5};

    cout<<vi.capacity()<<endl;

    vi.resize(10);
    vi.resize(100);
    vi.shrink_to_fit();
    cout<<vi.capacity()<<endl;

    return 0;
}

int main1()
{
    vector<int> vi;

    vi.reserve(16);

    for(int i=0; i<10; i++)
    {
        vi.push_back(i);
        cout<<"size:"<<vi.size()<<endl;
        cout<<"capacity:"<<vi.capacity()<<endl; // realloc
    }
    vi.shrink_to_fit();
    cout<<"size:"<<vi.size()<<endl;
    cout<<"capacity:"<<vi.capacity()<<endl; // realloc

    return 0;
}
