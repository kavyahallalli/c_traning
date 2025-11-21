//write a program with function with variable parameter//
#include <stdio.h>
#include <stdarg.h>
void add(int count , ...)
{
    int result = 0;
    va_list bag;
    va_start(bag , count);
    for(int i=1;i<=count;i++)
    {
        int n= va_arg (bag , int);
        result=result+n;
    }
        printf(" %d ",result);
    va_end (bag);
}
void main()
{
    add(6,1,2,3,4,5,8);
}