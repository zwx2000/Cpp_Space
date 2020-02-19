#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    vector<int> v = {1,2,3,1,2,3,3,4,5,4,5,6,7};
    sort(v.begin(), v.end());
    // 1 1 2 2 3 3 3 4 4 5 5 6 7
    auto last = unique(v.begin(), v.end());
    // v now holds {1 2 3 4 5 6 7 x x x x x x},
    // where 'x' is indeterminate
    v.erase(last, v.end());
    for (int i : v)
        cout << i << " ";
    cout << "\n";

    // remove consecutive spaces
    string s = "wanna go to space?";
    auto end = unique(s.begin(), s.end(),
                      [](char l, char r){
        return isspace(l) && isspace(r) && l == r;
    });
    // s now holds "wanna go to space?xxxxxxxx",
    // where 'x' is indeterminate
    cout << string(s.begin(), end) << '\n';
    return 0;
}
