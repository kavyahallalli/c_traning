#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p = (int *)malloc(4*sizeof(int));
    p[0]=26;
    p[1]=67;
    p[2]=89;
    p[3]=45;
    printf("%d%d%d%d\n",p[0],p[1],p[2],p[3]);
}