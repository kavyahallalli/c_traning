#include <stdio.h>
void main()
{
    int a[4]={54,78,87,93};
    int *p=a;
    printf("%d\n",*p);
    printf("%d\n",*(p+1));
}