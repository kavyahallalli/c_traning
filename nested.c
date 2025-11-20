#include <stdio.h>
void main()
{
    int a[4][3]={ {1,2} ,{3,4} ,{5,6} ,{7,8} };
    for(int i=0; i<=4; i++)
    {
        for(int j=0; j<=3; j++)
        {
            printf("%d\n",a[i][j]);
        }
    }
}