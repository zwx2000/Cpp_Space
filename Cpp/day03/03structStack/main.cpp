#include <iostream>
#include <string.h>
#include "mystack.h"

//数行合一

//封装 包含两部分 一部分数据 一部分行为（接口）
//对外提供接口，隐藏数据，对内数据开放

//struct 默认全部是 public
//class  默认全部是 private

//xx.h xx.c

using namespace std;

//LIFO FILO

int main()
{
    myStack s;
    s.init();
    for(char ch = 'a'; !s.isFull()&&ch<='z'; ch++)
        s.push(ch);
    while(!s.isEmpty())
        cout<<s.pop()<<'\t';
    cout<<endl;

    myStack s2;
    s2.init();
    for(char ch = 'm'; !s2.isFull()&&ch<='m'+10; ch++)
        s2.push(ch);
    while(!s2.isEmpty())
        cout<<s2.pop()<<'\t';
    cout<<endl;

    return 0;
}
