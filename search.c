#include <stdio.h>
int search(int a[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if (a[i]==key)
        return 1;
    return 0;
}
void main()
{
    int key;
    int a[5]={24,54,74,84,95};
    int n=5;
    printf("what are you searching");
    scanf("%d",&key);
    printf("%d",search(a,key,n));
}