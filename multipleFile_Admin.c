#include<stdio.h>
#include<string.h>
struct students
{
 char name[20];
 int age;
};
struct course
{
 char name[20];
 int id;
};
struct admin
{
  struct students stu[2];
  struct course cou[2];
};
void studentdetails()
{
 struct students s[20];
 struct admin ad;
 FILE *fptr;
 char name[20];
 int age;
 int i=0;
 fptr=fopen("student_details.txt","r");
 if(fptr==NULL)
 {
  printf("error opening file\n");
  exit(1);
 }
 while(fscanf(fptr,"%s %d\n",name,&age)!=EOF)
 {
  strcpy(ad.stu[i].name,name);
  ad.stu[i].age=age;
  i++;
 }
 printf("i=%d\n",i);
 for(int j=0;j<i;j++)
 {
  printf("%s \t",ad.stu[j].name);
  printf("%d \t",ad.stu[j].age);
  printf("\n");
 }
 printf("\n");
 fclose(fptr);
}
void coursedetails()
{
 struct course c[20];
 struct admin ad;
 FILE *fptr;
 char name[20];
 int id;
 int i=0;
 fptr=fopen("course_details.txt","r");
 if(fptr==NULL)
 {
  printf("error opening file\n");
  exit(1);
 }
 while(fscanf(fptr,"%s %d\n",name,&id)!=EOF)
 {
  strcpy(ad.cou[i].name,name);
  ad.cou[i].id=id;
  i++;
 }
 for(int j=0;j<i;j++)
 {
  printf("%s \t",ad.cou[j].name);
  printf("%d \t",ad.cou[j].id);
  printf("\n");
 }
 fclose(fptr);
}
int main()
{
   studentdetails();
   coursedetails();
   return 0;
}
