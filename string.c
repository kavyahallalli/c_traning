#include <stdio.h>
#include <string.h> 
void main()
{
    char name[10]="KAVYAH";
    printf("%c",name[5]);
}
                                                also

#include <stdio.h>
#include <string.h>
void main()
{
    //create
    char name [10]="kavyah";
    char new [8]="hello";
    //lengths
    printf("%c\n",name[5]);
    printf("length of string is %d\n",strlen(name));
    //concatenation
strcat(new,name);//new=hello+kavyah
printf("%s",new);
}