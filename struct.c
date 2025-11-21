#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    s1.age=18;
    s1.marks=90.00;
    strcpy(s1.name,"sanu");
    
    struct student s2={"janu",20,89.43};
    
    printf("%s ",s2.name);
    printf("%d ",s2.age);
    printf("%f ",s2.marks);
}
