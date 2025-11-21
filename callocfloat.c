#include <stdio.h>
#include <stdlib.h>
void main()
{
    float *p = (float*)calloc(3,sizeof(float));
    p[0]=34.43;
    p[1]=56.67;
    p[2]=98.12;
    printf("%f%f%f",p[0],p[1],p[2]);
}