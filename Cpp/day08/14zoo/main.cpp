#include <iostream>
#include "animal.h"
#include "cat.h"
#include "dog.h"

using namespace std;

//�������к����麯������������������Ϊvirtual
//Ϊ��ʵ������������

int main()
{
//    Cat c;
//    Dog d;
//    Animal * pa = &d;
//    pa->voice();

    Animal *pa = new Dog;
    pa->voice();

    delete pa;

    return 0;
}
