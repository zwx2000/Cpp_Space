#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

//5*5

int main()
{
    srand(time(NULL));
    vector<int> t;
    vector<vector<int>> tt(5,t);
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<rand()%20; j++)
        {
            tt[i].push_back(j);
        }
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<tt[i].size(); j++)
        {
            cout<<tt[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main1()
{
    vector<int> t(5);
    vector<vector<int>> tt(5,t);

    cout<<tt.size()<<endl;
    cout<<tt[0].size()<<endl;
    cout<<tt[1].size()<<endl;
    cout<<tt[2].size()<<endl;
    cout<<tt[3].size()<<endl;
    cout<<tt[4].size()<<endl;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<(tt[i][j] = 100)<<" ";
        }
        cout<<endl;
    }

    return 0;
}
