#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    int marks;
};
void main()
{
    struct student s1;
    struct student *p = &s1;
    strcpy(p -> name,"savi anu");
    p -> age = 23;
    p -> marks = 98.56;
    printf("%d \n",p->age);
    printf("%s \n",p->name);
    printf("%f \n",p->marks);
}