#include <stdio.h>
void names(char first[],char last[], char sw)
{
    char full[100];
    int i=0;
    int len =i+1;
    if(len < sw)
    printf("fits in the screen");
    else
    printf("does not fit in the screen");
{
  full[i]=first[i];
 i++;
}
full[i]=' ';
i++;
int j=0;
{
    full[i]=last[j];
    j++;
    i++;
}
printf("%s",full);
}
void main()
{
    char sw=6;
    char first[100]="raj";
    char last[100]="kumar";
    names(first,last,sw);
}
