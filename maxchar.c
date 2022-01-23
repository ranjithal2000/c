#include<stdio.h>
#define SIZE 100
#define CHARS 255
int main()
{
  char string[SIZE];
  int frequency[CHARS];
  int i=0,maximum;
  int value;
  printf("enter the string:\n");
  gets(string);
  for(i=0;i<CHARS;i++)
  {
      frequency[i]=0;
  }
  i=0;
  while(string[i]!='\0')
  {
      value=(int)string[i];
      frequency[value]+=1;
      i++;
  }
  maximum=0;
  for(i=0;i<CHARS;i++)
  {
      if(frequency[i]>frequency[maximum])
        maximum=i;
  }
  printf("maximum occurred character %c = %d times",maximum, frequency[maximum]);
 return 0;
}
