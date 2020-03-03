#include <iostream>
#include <queue>

using namespace std;

//vector    array

int main()
{
    int arr[10] = {1,3,5,7,9,2,4,6,8,10};
    priority_queue<int> pq(arr,arr+10);

    pq.push(100);
    pq.push(80);

    while(!pq.empty())
    {
        cout << pq.top() <<" ";
        pq.pop();
    }
    return 0;
}
