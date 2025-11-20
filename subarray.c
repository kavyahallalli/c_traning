#include <stdio.h>
int subarr(int arr[],int size)
{
    int diff=arr[0]-arr[size-1];
    return diff;
}
void main()
{
    int arr[5]={2,4,6,8,10};
    int size=5;
    printf("%d",subarr(arr,size));
}
                                                orSS
#include <stdio.h>
#include <stdlib.h>
int subarr(int arr[],int size)
{
    int diff=arr[0]-arr[size-1];
    return abs(diff);
}
void main()
{
    int arr[5]={2,4,6,8,10};
    int size=5;
    printf("%d",subarr(arr,size));
}