#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p = (int *)calloc(3,sizeof(int));
    p[0]=34;
    p[1]=56;
    p[2]=98;
    printf("%d%d%d",p[0],p[1],p[2]);
}