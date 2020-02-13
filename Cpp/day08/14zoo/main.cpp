#include <iostream>
#include "animal.h"
#include "cat.h"
#include "dog.h"

using namespace std;

//但凡类中含有虚函数，将其析构函数置为virtual
//为了实现完整的析构

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
