#include <stdio.h>
#include <stdlib.h>
struct Employee
{
char name[10];
char designation[10];
};
struct details
{
char id[20];
char branch[20];
}det;
struct admin
{
struct Employee emp[3];
struct details det[3];
};
void employee()
{
struct admin a;
FILE *fptr,*fptr1;
int i;
fptr = fopen("employee1.txt", "r");
if(fptr==NULL)
{
printf("error opening\n");
exit(1);
}
printf("Employee Details : \n");
printf("-------------------\n");
for(i =0;i<4;i++)
{
fscanf(fptr,"%s %s", &a.emp[i].name,&a.emp[i].designation);
printf("%s ",a.emp[i].name);
printf("%s\n",a.emp[i].designation);
printf("\n");
}
fptr1 = fopen("details1.txt","r");
if(fptr1==NULL)
{
printf("error opening\n");
exit(1);
}
printf("Details is: \n");
printf("-------------------\n");
for(i=0;i<4;i++)
{
fscanf(fptr1, "%s %s", &a.det[i].id,&a.det[i].branch);
printf("%s ",a.det[i].id);
printf("%s\n",a.det[i].branch);
printf("\n");
}
fclose(fptr);
fclose(fptr1);
}


void merg()
{
struct admin a;
FILE *f1=fopen("file3.txt","w");
if(f1==NULL)
{
printf("Unable to open the file\n");
exit(1);
}
else
{
printf("Successfully written into the new file\n");
}
for (int i=0;i<3;i++)
{
fprintf(f1,"%s %s\n",&a.emp[i].name,&a.emp[i].designation);
}
for (int i=0;i<3;i++)
{
fprintf(f1,"%s %s\n",&a.det[i].id,&a.det[i].branch);
}
fclose(f1);
}


int main()
{
employee();
merg();

return 0;
}

