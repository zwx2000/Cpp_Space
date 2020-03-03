#include <stdio.h>

int binSearch(int *p, int left, int right, int find) //log2n
{
    int mid;
    while(left <= right)
    {
        mid = (left + right)/2;
        if(find == p[mid])
            return mid;
        else if()
                {}
        else {

        };

    }
}

int main()
{
    int arr[10];

    arr[3];//O(1)

    for(int i=0; i<10; i++) //O(n)
    {
        if(arr[i] == 100)
        {}
    }

    for(int i=0; i<9; i++)  //O(n^2)
    {
        for(int j=0; j<9-i; j++)
        {
            if();
        }
    }

    return 0;
}
