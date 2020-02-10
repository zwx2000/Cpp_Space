#include <stdio.h>

void foo(int a)
{
    printf("foo\n");
    return;
}

int main()
{
    int a;
    int *pa = &a;

    void(*pf)(int a) = &foo;

    (*pf)(1);

    return 0;
}
