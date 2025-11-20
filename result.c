#include <stdio.h>
void exam(int m1,int m2,int m3)
{
    if(m1>=45&&m2>=45&&m3>=45)
    {
        printf("passed\n");
    }
    else
    {
        printf ("failed\ns");
    }
    float avg=(float)(m1+m2+m3)/3;
    printf("average is : %f",avg);
}
void main()
{
    int m1,m2,m3;
    printf("enter the values for m1 m2 m3");
    scanf("%d%d%d",&m1,&m2,&m3);
    exam(m1,m2,m3);
}