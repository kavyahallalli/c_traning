#include <stdio.h>
struct score
{
    int rank;
    float marks;
};
void edit(struct score *s1)
{
    printf("before change: %f\n",s1->marks);
    s1->marks=89.5;
    printf("after change: %f\n",s1->marks);
}
void main()
{
    struct score s1={4,76.67};
    edit(&s1);
    printf("after change in main :%f\n",s1.marks);
}
