#include <stdio.h>
void main()
{
    int pin=9001;
    int u_pin;
    printf("enter the user pin:");
    scanf("%d",&u_pin);
    printf("%d",pin==u_pin);
}