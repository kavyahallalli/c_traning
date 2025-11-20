#include <stdio.h>
void main()
{
    int t;
    int result=0;
    int q[3]={3,6.9};
    int c[3]={2,4,6};
    for(int i=0;i<3;i++)
    {
    t=q[i]*c[i];
    result=result+t;
    }
    printf("result is %d",result);
}