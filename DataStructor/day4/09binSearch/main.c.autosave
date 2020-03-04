#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b)
{
    return (*(int*)a>*(int*)b) ? 1 : 0;
}

//int binSearch(int *arr, int low, int high, int find)
//{
//    int mid;
//    while(low <= high)
//    {
//        mid = (low + high)/2;
//        if(arr[mid] == find)
//            return mid;
//        else if(arr[mid] < find)
//            low = mid+1;
//        else
//            high = mid-1;
//    }
//    return -1;
//}

int binSearch(int *arr, int low, int high, int find)
{
    int mid;
    if(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == find)
            return mid;
        else if(arr[mid] < find)
            return binSearch(arr,mid+1,high,find);
        else
            return binSearch(arr,low,mid-1,find);
    }
    return -1;
}

int main()
{
    int arr[10] = {1,3,5,7,9,2,4,6,8,10};
    qsort((void*)arr,10,sizeof(int),compare);

    for(int i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n%d",binSearch(arr,0,9,5));
    return 0;
}
