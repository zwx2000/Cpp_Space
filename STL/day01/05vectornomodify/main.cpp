#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vi  = {1,2,3,4,5};
    vector<int> vi2 = {1,2,3,5,4};
    if(vi == vi2)
        cout<<"=="<<endl;
    else
        cout<<"!="<<endl;

    if(vi > vi2)
        cout<<">"<<endl;
    else
        cout<<"<"<<endl;

    return 0;
}

int main2()
{
    vector<int> vi;

    vi.reserve(10);
    cout<<"size    :"<<vi.size()<<endl;
    cout<<"capacity:"<<vi.capacity()<<endl;

    vi.push_back(1);
    cout<<"size    :"<<vi.size()<<endl;
    cout<<"capacity:"<<vi.capacity()<<endl;

    vi.shrink_to_fit();
    cout<<"size    :"<<vi.size()<<endl;
    cout<<"capacity:"<<vi.capacity()<<endl;

    return 0;
}

int main1()
{
    vector<int> vi;
    cout<<vi.size()<<endl;
    if(vi.empty())
        cout<<"is empty"<<endl;

    vi.push_back(10);
    if(vi.empty())
        cout<<"is empty"<<endl;

    cout<<vi.max_size()<<endl;

    return 0;
}
