#include <iostream>
#include <vector>
#include <list>

using namespace std;

//random access 内存连续的容器

//能用容器内部的算法，不要用std::的算法

int main()
{
    vector<int> vi;
    vi = {1,2,3,4,5,6};

    for(int i=0; i<vi.size(); i++)
        cout<<vi[i]<<endl;
//        cout<<vi.at(i)<<endl;

    return 0;
}

int main1()
{
    vector<int> vi;
    vi = {1,2,3,4,5,6};

    vector<int> vi2;
    vi2.assign({1,2,3,4,5,6,7,8,9});

//    vi.swap(vi2);
    swap(vi,vi2);

    for(auto & i:vi2)
        cout<<i<<endl;

    return 0;
}
