//add 3 numbers using call by reference//
#include <stdio.h>
struct score
{
    int rank;
    float marks;
};
void edit(struct score s1)
{
    printf("before change: %f\n",s1.marks);
    s1.marks=89.5;
    printf("after change: %f\n",s1.marks);
}
void main()
{
    struct score s1={67.7,5};
    edit(s1);
    printf("after change in main :%f\n",s1.marks);
}
