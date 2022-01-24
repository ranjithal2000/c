#include<stdio.h>
int main()
{
    int a[15],n,i,*ptr;
    printf("enter the size of array:\n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ptr=&a[n-1];
    printf("elements in reverse order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",*ptr--);
    }
    return 0;
}
