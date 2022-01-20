#include<stdio.h>
int main()
{
int phy, chem, bio, math, comp, total;
float percentage;
char grade;
printf("enter the marks of each sub:\n");
scanf("%d%d%d%d%d", &phy,&chem,&bio,&math,&comp);
total=phy+chem+bio+math+comp;
percentage=(total/500)*100;
if(percentage>=90)
   grade='A';
else if(percentage>=80)
   grade='B';
else if(percentage>=70)
   grade='C';
else if(percentage>=60)
   grade='D';
else if(percentage>=40)
   grade='E';
else
   grade='F';
printf("\n Total marks is %d", total);
printf("\n Percentage is %f", percentage);
printf("\n Grade is %c", grade);
return 0;
}
