#include <iostream>
#include <deque>

using namespace std;

//stack
//queue

int main()
{
    deque<char> dc;
    for(char ch = 'a'; ch<='z'; ch++)
        dc.push_front(ch);

    while(!dc.empty())
    {
        cout<<dc.front()<<endl;
        dc.pop_front();
    }
    return 0;
}
