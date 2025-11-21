#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book 
{
    char name[100];
    char author[100];
    int year;
};
void main()
{
    int n;
    printf("enter number of the book\n");
    scanf("%d",&n);
    struct book b[n];
    for(int i=0;i<n;i++)
    {
        printf("enter name of the book\n");
        scanf("%s",b[i].name);
        printf("enter name of author\n");
        scanf("%s",b[i].author);
        printf("enter the year\n");
        scanf("%d",&b[i].year);
    }
printf("your information is : \n");
for(int i=0; i<n; i++)
{
    printf("%s", b[i].name);
    printf("%s", b[i].author);
    printf("%d", b[i].year);
}
}
 