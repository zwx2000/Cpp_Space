#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> si;

    for(char ch = 'a'; ch<='z'; ch++)
        si.push(ch);

    while(!si.empty())
    {
        cout<<si.top()<<" ";
        si.pop();
    }
    return 0;
}
