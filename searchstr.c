#include<stdio.h>
#include<string.h>
void main()
{
 char s1[50],s2[50];
 int i,j,a,b;
 printf("enter main string:");
 gets(s1);
 printf("enter the sub string:");
 gets(s2);
 a=strlen(s1);
 b=strlen(s2);
 for(i=0;i<a;i++)
 {
     for(j=0;j<b;j++)
     {
         if(s1[i+j]!=s2[j])
         {
             break;
         }
     }
     if(j==b)
     {
       printf("substring found at index %d\n",i+1);
     }
 }
 printf("not found\n");
}
