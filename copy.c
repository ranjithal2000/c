#include<stdio.h>
int main()
{
    int a1[]={1,2,3,4,5,6};
    int length=sizeof(a1)/sizeof(a1[0]);
    int a2[length];
    for(int i=0;i<length;i++)
    {
        a2[i]=a1[i];
    }
    printf("elements of original array:\n");
    for(int i=0;i<length;i++)
    {
        printf("%d",a1[i]);
    }
    printf("\n");
    printf("elements of new array:\n");
    for(int i=0;i<length;i++)
    {
        printf("%d",a2[i]);
    }
    return 0;
}
