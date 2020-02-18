#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<char> dc;
    for(char ch = 'a'; ch<='z'; ch++)
        dc.push_front(ch);

    while(!dc.empty())
    {
        cout<<dc.back()<<" ";
        dc.pop_back();
    }

    return 0;
}
