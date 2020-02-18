#include <iostream>
#include <queue>

using namespace std;

//优先队列

int main()
{
    priority_queue<int,vector<int>,greater<int>> pqi;

    pqi.push(1);
    pqi.push(3);
    pqi.push(5);
    pqi.push(7);
    pqi.push(9);
    pqi.push(2);
    pqi.push(4);
    pqi.push(6);
    pqi.push(8);

    while(!pqi.empty())
    {
        cout<<pqi.top()<<endl;
        pqi.pop();
    }

    return 0;
}
