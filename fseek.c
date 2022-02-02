#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("temp.txt","r");
    if(fp==NULL)
    {
        printf("\n cannot open the file");
        exit(1);
    }
    fseek(fp,-3,SEEK_END);//1
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);
}
