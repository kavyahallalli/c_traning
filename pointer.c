
#include <stdio.h>
void main()
{
    int a=70;
    int *p=&a;
    printf("a value is %d\n",a);
    printf("a address is %p\n",p);
    printf("p points to %d",*p);
}
