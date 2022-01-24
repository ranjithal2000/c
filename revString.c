#include<stdio.h>
#include<string.h>
void revString(char*str)
{
    int l,i;
    char *begin_ptr,*end_ptr,temp;
    l=strlen(str);
    printf("length of the string is %d \n",l);
    begin_ptr=str;
    end_ptr=str;
    for(i=0;i<l-1;i++)
        end_ptr++;
    for(i=0;i<l/2;i++)
    {
        temp=*end_ptr;
        *end_ptr=*begin_ptr;
        *begin_ptr=temp;
        begin_ptr++;
        end_ptr--;
    }
}
int main()
{
    char str[100]="Hello";
    printf("Enter the string:%s\n",str);
    revString(str);
    printf("reverse of string:%s\n",str);
    return 0;
}
