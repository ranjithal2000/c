#include<stdio.h>
int main()
{
int a[60],i,n,large,small;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
large=small=a[0];
for(i=1;i<n;i++)
{
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("the smallest dig is:%d\n", small);
printf("the largest element is:%d\n", large);
return 0;
}
