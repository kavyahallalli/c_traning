#include <stdio.h>
float poc(int r)
{
    const float pi=3.14;
   float sum=2*3.14*r;
    return sum;
}
void main()
{
    int r=4;
    printf("%f",poc(r));
}