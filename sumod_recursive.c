#include <stdio.h>
int sod_recursive(int n)
{
    if(n==0)
    return 0;
    int d=n%10;
     return  d + sod_recursive(n/10);
    sod_recursive(n+1);//recursive call//
}
void main()
{
    int n;
    printf("enter the value to n ; ");
    scanf("%d",&n);
    printf("%d", sod_recursive(n));
}