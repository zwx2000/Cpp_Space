#include <iostream>
#include "mylist.h"

using namespace std;

//¾ä±ú  FILE* sqlite3*
//Node * head

int main()
{
    myList l;
    l.initList();

    for(int i=0; i<10; i++)
        l.insertList(i);
    l.traverseList();
    cout<<l.searchList(3)<<endl;
    l.destroyList();


    return 0;
}
