#include<stdio.h>
#include<string.h>
struct student
{
    char Name[20];
    int Id;
    int Age;
};
struct course
{
 char name[20];
 int id;
};
void main()
{
 struct student st;
 FILE *fptr;
 fptr=fopen("student_details.txt","r");
 if(fptr==NULL)
 {
   fprintf(stderr,"error opening:\n");
 }
 while(fread(&st,sizeof(struct student), 1, fptr))
  printf("%s%d%d", st.Name,st.Id,st.Age);
 fclose(fptr);
 FILE *fp1;
 struct course c;
  fp1=fopen("course details.txt","r");
 if(fp1==NULL)
 {
   fprintf(stderr,"error opening:\n");
   exit(1);
 }
 fread(&c,sizeof(struct course), 1, fp1);
  printf("\n %s \n %d \n", c.name,c.id);
  fclose(fp1);
}
