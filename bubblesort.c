#include <stdio.h>
void bubble(int a[],int n)
{
   int temp=0;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            while(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int k=0 ; k<n ; k++)
    {
        printf("%d\n", a[k]);
    }
}
void main()
{
    int a[5]={13,24,46,67,99};
    int n=5;
    bubble(a,n );
}