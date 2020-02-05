#include <stdio.h>

int main()
{
    int a; int b;
    int c = 100;
    (a = b) = c;

    return 0;
}

#if 0
enum Day
{
    Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};

int main()
{
    enum Day d = Monday;
}
#endif

#if 0
int main()
{
    char *p = malloc(100);

    const int a;

    int *q = &a;
    *q=200;
    printf("a = %d\n",a);

    int arr[2][3]; //int (*)[3]
    int *pa = arr;
    return 0;
}
#endif
