#include <stdio.h>

//void popSort(int *p, int n)
//{
//    for(int i=0; i<n-1; i++)
//    {
//        for(int j=0; j<n-i-1; j++)
//        {
//            if(p[j]>p[j+1])
//            {
//                p[j]^=p[j+1];
//                p[j+1]^=p[j];
//                p[j]^=p[j+1];
//            }
//        }
//    }
//}

//�Ż��� �������
void popSort(int *p, int n)
{
    int flag;
    for(int i=0; i<n-1; i++)
    {
        flag = 1;
        for(int j=0; j<n-i-1; j++)
        {
            if(p[j]>p[j+1])
            {
                p[j]^=p[j+1];
                p[j+1]^=p[j];
                p[j]^=p[j+1];
                flag = 0;
            }
        }
        if(flag)
            break;
    }
}

//�������򣺵�һ��Ԫ����Ȼ����
void insertSort(int *arr, int n)
{
    int t,i,j;
    for(i=1; i<n; i++)
    {
        t = arr[i];
        for(j=i; j-1>=0 && t<arr[j-1]; j--)
        {
            arr[j] = arr[j-1];
        }
        arr[j] = t;
    }
}

//�����������
void shellSort(int *arr, int n)
{
    int t,i,j;
    int gap = n/2;
    while(gap>=1)
    {
        for(i=gap; i<n; i++)
        {
            t = arr[i];
            for(j=i; j-gap>=0 && t<arr[j-gap]; j = j-gap)
            {
                arr[j] = arr[j-gap];
            }
            arr[j] = t;
        }
        gap = gap/2;
    }
}

//void selectSort(int * arr, int n)
//{
//    for(int i=0; i<n-1; i++)
//    {
//        for(int j=i+1; j<n; j++)
//        {
//            if(arr[i]>arr[j])
//            {
//                arr[i] ^= arr[j];
//                arr[j] ^= arr[i];
//                arr[i] ^= arr[j];
//            }
//        }
//    }
//}

//�Ż��������ȶ�����
void selectSort(int * arr, int n)
{
    int idx;
    for(int i=0; i<n-1; i++)
    {
        idx = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[idx]>arr[j])
            {
                idx = j;
            }
        }
        if(idx != i)
        {
            arr[i]  ^= arr[idx];
            arr[idx]^= arr[i];
            arr[i]  ^= arr[idx];
        }
    }
}

void quickSort(int *arr, int left, int right)
{
    if(left < right)
    {
        int pivot = arr[left], l = left, h = right;
        while(l < h)
        {
            while(l<h && arr[h]>=pivot)  //����ƶ���С����ֵ
                h--;
            arr[l] = arr[h];

            while(l<h && arr[l]<=pivot)  //С���ƶ��������ֵ
                l++;
            arr[h] = arr[l];
        }
        arr[h] = pivot;

        quickSort(arr,left,h-1);
        quickSort(arr,h+1,right);
    }
}



void dis(int * arr, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    putchar(10);
}

int main()
{
    int arr[] = {1,3,5,7,9,2,4,6,8,10};

//    popSort(arr,sizeof(arr)/sizeof(*arr));
//    insertSort(arr,sizeof(arr)/sizeof(*arr));
//    shellSort(arr,sizeof(arr)/sizeof(*arr));
//    selectSort(arr,10);
    quickSort(arr,2,8);
    dis(arr,sizeof(arr)/sizeof(*arr));
    return 0;
}
