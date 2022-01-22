#include<stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d,b=%d\n",a,b);
    swap(a,b);
    printf("After swapping a=%d,b=%d",a,b);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping values in function a=%d, b=%d\n",a,b);
}
