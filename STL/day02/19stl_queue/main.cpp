#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<char> si;

    for(char ch = 'a'; ch<='z'; ch++)
        si.push(ch);

    while(!si.empty())
    {
        cout<<si.front()<<" ";
        si.pop();
    }
    return 0;
}
