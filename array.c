#include <stdio.h>
int addarr(int arr[],int size)
{
    int result=0;
    for(int i=0;i<size;i++)
    {
        result=result+arr[i];
    }
    return result;
}
void main()
{
    int arr[5] = {12,23,34,45,56};
    int size=4;
    printf("%d",addarr(   arr , size ));
}