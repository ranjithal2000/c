#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
  if(b>c)
    printf("second largest is %d", b);
  else
    printf("second largest is %d", c);
}
else if(b>a && b>c)
{
  if(a>c)
    printf("second largest is %d", a);
  else
    printf("second largest is %d", c);
}
else if (a>b)
  printf("second largest is %d", a);
  else
   printf("second largest is %d", b);
return 0;
}
