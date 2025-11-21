#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
    char name[100];
    int maxspeed;
    int price;
};
void main()
{
    int n;
    printf("enter the number of car:");
    scanf("%d",&n);
    struct car c[n];
    for (int i=0; i<n;i++)
    {
        printf("enter name :");
        scanf("%s",c[i].name);
        printf("enter the maximum speed:");
        scanf("%d",&c[i].maxspeed);
        printf("enter the price");
        scanf("%d",&c[i].price);
    }
    printf("your information:\n");
    for(int i=0;i<n; i++)
    {
    printf("%s",c[i].name);
    printf("%d",c[i].maxspeed);
    printf("%d",c[i].price);
    }
}