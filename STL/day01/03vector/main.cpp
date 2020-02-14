#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vi = {1,2,3,4,5,6,7,8,9,10};
    vi.erase(vi.end()-1);
    cout<<"front:"<<vi.front()<<endl;
    cout<<"end  :"<<vi.back()<<endl;
    return 0;
}

int main2()
{
    vector<int> vi = {1,2,3,4,5,6,7,8,9,10};
    vi.insert(vi.end(),10000);
    cout<<"front:"<<vi.front()<<endl;
    cout<<"end  :"<<vi.back()<<endl;
    vector<int>::iterator itr;
    for(itr=vi.begin(); itr!=vi.end(); ++itr)
    {
        cout<<*itr<<endl;
    }

}

int main1()
{
    vector<int> vi = {1,2,3,4,5,6,7,8,9,10};
    cout<<"front"<<vi.front()<<endl;
    cout<<"end "<<vi.back()<<endl;
//    vi.push_back(100);
    vi.pop_back();
    cout<<"front"<<vi.front()<<endl;
    cout<<"end "<<vi.back()<<endl;

    vector<int>::iterator itr;
    for(itr=vi.begin(); itr!=vi.end(); ++itr)
    {
        cout<<*itr<<endl;
    }
    return 0;
}
