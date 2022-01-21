#include<stdio.h>
int main()
{
char str[100];
int i, vow, con, dig, spc, sym, tot,len;
vow=0;con=0;dig=0;spc=0;sym=0;
printf("enter the string\n");
gets(str);
len=strlen(str);
for(i=0;i<len;i++)
{
if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
{
 tot++;
}
if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
{
vow++;
}
else if((str[i]>'a' && str[i]<='z') || (str[i]>'A' && str[i]<='Z'))
{
con++;
}
else if(str[i]>='0' && str[i]<='9')
{
dig++;
}
else if(str[i]==' ')
{
spc++;
}
else
{
sym++;
}
}

printf("\n Vowels:%d",vow);
printf("\n Consonants:%d",con);
printf("\n Digits:%d",dig);
printf("\n space:%d", spc);
printf("\n Symbols:%d",sym);
printf("\n Total words:%d",tot);
return 0;
}
