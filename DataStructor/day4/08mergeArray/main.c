#include <stdio.h>

//将两个有序数组合并，使其仍然有序
void mergeArr(int *src, int *tmp, int start, int mid, int end)
{
    int i = start; int j = mid+1; int k = start;
    while(i != mid+1 && j != end+1)
    {
        if(src[i] < src[j])
            tmp[k++] = src[i++];
        else
            tmp[k++] = src[j++];
    }
    if(i == mid+1)
        while(j != end+1)
            tmp[k++] = src[j++];
    else
        while(i != mid+1)
            tmp[k++] = src[i++];

    while(start <= end)
    {
        src[start] = tmp[start];
        start++;
    }
}

void mergeSort(int *arr, int *tmp,int start, int end)
{
    if(start<end)
    {
        int mid = (start + end)/2;
        mergeSort(arr,tmp,start,mid);
        mergeSort(arr,tmp,mid+1,end);
        mergeArr(arr,tmp,start,mid,end);
    }
}

int main()
{
    int a[8] = {2,4,5,9,1,6,7,8};
    int c[8];
    mergeSort(a,c,0,7);

    for(int i=0; i<8; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
