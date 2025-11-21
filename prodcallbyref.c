//write a function which will multiply 3 numbers and call it by reference//
#include <stdio.h>
void product(int *a,int *b,int *c)
{
    int prod=((*a)*(*b)*(*c));
    printf("%d", prod);
}
void main()
{
    int a=65;
    int b=89;
    int c=34;
    product(&a,&b,&c);
}