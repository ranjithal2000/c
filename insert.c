#include<stdio.h>
#define MAX_SIZE 50
int main()
{
int arr[MAX_SIZE];
int n,i,pos,val;
printf("enter the size of array:\n");
scanf("%d",&n);
printf("enter the array elements:\n");
for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
printf("Enter the pos to insert ele:\n");
scanf("%d",&pos);
printf("Enter the value\n");
scanf("%d",&val);
for(i=n-1;i>=pos-1;i--)
 arr[i+1]=arr[i];
 arr[pos-1]=val;
printf("resultant array is\n");
for(i=0;i<=n;i++)
 printf("%d", arr[i]);
 return 0;
}
