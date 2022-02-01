#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    float *data;
    printf("enter the number of elements(1 to 100):");
    scanf("%d",&n);
    data=(float*)calloc(n,sizeof(float));
    if(data==NULL)
    {
        printf("memory is not allocated!!\n");
        exit(0);
    }
    for(int i=0;i<n;i++)
    {
        printf("enter number %d:\n",i+1);
        scanf("%f",data+i);
    }
    for(int i=1;i<n;i++)
    {
        if(*data<*(data+i)){
            *data=*(data+i);
       }
   }
   printf("largest number=%.2f \n",*data);
   return 0;
}
