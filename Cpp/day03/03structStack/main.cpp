#include <iostream>
#include <string.h>
#include "mystack.h"

//���к�һ

//��װ ���������� һ�������� һ������Ϊ���ӿڣ�
//�����ṩ�ӿڣ��������ݣ��������ݿ���

//struct Ĭ��ȫ���� public
//class  Ĭ��ȫ���� private

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
