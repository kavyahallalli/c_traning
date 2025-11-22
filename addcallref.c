#include <stdio.h>
void add(int *a,int *b,int *c)
{
    int add=((*a)+(*b)+(*c));
    printf("%d ",add);
}
void main()
{
    int a=34;
    int b=67;
    int c=98;
    add(&a,&b,&c);
}