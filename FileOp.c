#include<stdio.h>
#define N_CHARS 10
int main()
{
    FILE *fptr;
    char c, ch[N_CHARS + 1],fname[20];
    int n;
    fptr=fopen("name.txt","w");
    printf("enter your content:\n");
    while((c=getchar())!='\n')
    {
        putc(c,fptr);
    }
    fclose(fptr);
    fopen("name.txt","r");
    printf("file content is:");
    while((c=getc(fptr))!=EOF)
    {
        printf("%c",c);
    }
    printf("\n end of file \n");
    fclose(fptr);
    printf("enter the number of characters to display:\n");
    scanf("%d",&n);
    printf("enter the name of file:\t");
    scanf("%s",fname);
    fptr=fopen(fname,"r");
    if(fread(ch,1,n,fptr)==n)
    {
        ch[n]='\0';
        puts(ch);
    }
    fclose(fptr);
    return 0;
}

