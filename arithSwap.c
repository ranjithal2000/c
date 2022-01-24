#include<stdio.h>
void main()
{
    int a,b,*p1,*p2;
    printf("\n Enter two numbers:");
    scanf("%d%d",&a,&b);
    p1=&a;
    p2=&b;

    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;

   /* *p1=*p1 * *p2;
    *p2=*p1 / *p2;
    *p1=*p1 / *p2; */

    printf("\n after swapping the value of a=%d and b=%d",a,b);
}
