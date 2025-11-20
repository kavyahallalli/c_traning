// write c function which will axcept 3 parameters l,b,h and returns volume of the cuboide//
#include <stdio.h>
int volume(int l,int b,int h)
{
   int voc=l*b*h;
   return voc;
}
void main()
{
    int l=2,b=4,h=6;
    printf("%d",volume(l,b,h));
}