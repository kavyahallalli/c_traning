#include <stdio.h>
void fakeswap(float ca,float cb)
{
    float temp=0;
    temp=ca;
    ca=cb;
    cb=temp;
    printf("fake swap in fn: ca=%f cb=%f \n",ca,cb);
}
void realswap(float *pca,float *pcb)
{
    float temp=0;
    temp=*pca;
    *pca=*pcb;
    *pcb=temp;
    printf("real swap in fn: ca=%f cb=%f  \n",*pca,*pcb);
}
void main()
{
  float ca,cb;
  printf("enter currency a: ");
  scanf("%f",&ca);
  printf("enter currency b: ");
  scanf("%f",&cb);
  fakeswap(ca,cb);
  printf("fake swap : ca=%f cb=%f \n",ca ,cb);
  realswap(&ca,&cb);
  printf("real swap : ca=%f cb=%f",ca,cb);
}
