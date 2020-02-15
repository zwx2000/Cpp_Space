#include <iostream>
#include <vector>

using namespace std;

//capacity >= size
//resize size�Ĵ�С capacityֻ���󲻻��С
//capacity > size => capacity = size

//Ԥ���ռ� ����������ռ�
//reserve Ԥ���ռ䣬�������죬resize һ���ܹ��ᷢ�������������Ϊ

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
