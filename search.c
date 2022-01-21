#include<stdio.h>
#define MAX_SIZE 50
int main()
{
int arr[MAX_SIZE];
int n,i,search,found;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
printf("Enter an element to search:");
scanf("%d",&search);
found=0;
for(i=0;i<n;i++)
{
 if(arr[i]==search)
 {
  found=1;
  break;
 }
}
if(found==1)
{
printf("%d is found at position %d",search,i+1);
}
else
{
printf("%d is not found in the array");
}
return 0;
}
