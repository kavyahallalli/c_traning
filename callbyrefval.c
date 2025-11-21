#include <stdio.h>
void sum_value(int a,int b)
{
    int sum = a+b;
    printf("%d\n",sum);
}
void sum_ref(int *a,int *b)
{
    int sum = *a+*b;
    printf("%d\n",sum);
}
void main()
{
    int a=74;
    int b=32;
    sum_value(a,b);
    sum_ref(&a,&b);
}


