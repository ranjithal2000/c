#include<stdio.h>
int main()
{
    char fname[20],ch;
    FILE *fps,*fpt;
    printf("enter file name: ");
    gets(fname);
    fps=fopen(fname,"r");
    if(fps==NULL)
        return 0;
    fpt=fopen("temp.txt","w");
    if(fpt==NULL)
        return 0;
    ch=fgetc(fps);
    while(ch != EOF)
    {
        ch=ch+100;
        fputc(ch,fpt);
        ch=fgetc(fps);
    }
    fclose(fps);
    fclose(fpt);
    fps=fopen(fname,"w");
    if(fps==NULL)
        return 0;
    fpt=fopen("temp.txt","r");
    if(fpt==NULL)
        return 0;
    ch=fgetc(fpt);
    while(ch!=EOF)
    {
        ch=fputc(ch,fps);
        ch=fgetc(fpt);
    }
    fclose(fps);
    fclose(fpt);
    printf("\n file %s encrypted successfully!",fname);
    return 0;
}
