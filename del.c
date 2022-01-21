#include<stdio.h>
#define MAX_SIZE 50
int main()
{
int arr[MAX_SIZE];
int n,i,pos;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
printf("Enter the element pos to delete:");
scanf("%d",&pos);
if(pos<0 || pos>n)
{
 printf("invalid position");
}
else
{
 for(i=pos;i<n-1;i++)
 {
  arr[i]=arr[i+1];
 }
 n=n-1;
 printf("elements after deletion are:");
 for(i=0;i<n;i++)
 {
   printf("%d",arr[i]);
 }
}
return 0;
}
