#include <stdio.h>
#include <string.h>
void main()
{
    char des [100]=" we are super kids";
    char se [10]="not bad";
    if((strstr(des,se))!=NULL)
    printf("found");
    else
    printf("not found");
}