#include<stdio.h>
void inc(int *a)
{
    *a=*a+1;
}
int main()
{
    int n=10;
    inc(&n);
    printf("value of number is:%d",n);
   return 0;
}
