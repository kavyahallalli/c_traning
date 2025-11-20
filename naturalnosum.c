// write the c program to gen sum of n natural numbers //

 #include <stdio.h>
void main()
{
    int result = 0;
    int i;
    printf("enter i:");
    scanf("%d",&i);
    for(i=1;i<=8;i++)
    {
        result=result+i;
    }
    printf("sum n natural numbers:%d",result);
} 