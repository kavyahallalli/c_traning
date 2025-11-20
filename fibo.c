#include <stdio.h>
void fibo(int n)
{
    int sum;
    int b=0;
    int c=1;
    for(int i=0;i<=n;i++)
    {
    printf("%d\n",b);    
    sum=b+c;
    b=c;
    c=sum;
    }
    printf("%d\n",sum);
}
void main()
{
    int n;
    printf("enter value to n\n");
    scanf("%d",&n);
    fibo(n);
}