#include <stdio.h>
void names(char first[],char last[])
{
    int i=0;
    char full[100];
    while (first[i]!='\0')
{
 full[i]=first[i];
 i++;
}
full[i]=' ';
i++;
int j=0;
while (last[j]!='\0')
{
    full[i]=last[j];
    j++;
    i++;
}
printf("%s",full);
}
void main()
{
    char first[100]="raj";
    char last[100]="kumar";
    names(first,last);
}