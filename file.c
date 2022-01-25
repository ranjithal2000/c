#include<stdio.h>
void main()
{
    FILE *fptr;
    char ch;
    fptr=fopen("a.txt","w");
    printf("enter your content:\n");
    while((ch=getchar())!='\n')
    {
        putc(ch,fptr);
    }
    fclose(fptr);
    fopen("a.txt","r");
    printf("file content is:");
    while((ch=getc(fptr))!=EOF)
    {
        printf("%c",ch);
    }
    printf("\n end of file \n");
    fclose(fptr);
}
