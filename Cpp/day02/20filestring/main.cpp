#include <iostream>

using namespace std;

int main()
{
    FILE *pf = fopen("xx.txt","r+");
    if(pf == NULL)
    {
        printf("open error");
        exit(-1);
    }
    string s;
    char buf[1024];
    fgets(buf,1024,pf);
    s = buf;
    cout<<s<<endl;
    return 0;
}
