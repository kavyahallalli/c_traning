#include <stdio.h>
void main()
{
    int r;
    printf("enter the radius :");
    scanf("%d ",&r);
    const float pi= 3.14;
    float area = pi*r*r;
    printf("%f",area);
}