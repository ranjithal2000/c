#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
    int student_id;
    int age;
    char name[20];
    char course[20];
};
int main()
{
    struct Student std;
    FILE *fptr;
    int n;
    fptr=fopen("c1.txt","w");
    if(fptr == NULL)
    {
        printf("error opening file:\n");
        exit(1);
    }
     printf("enter student_id:");
     scanf("%d",&std.student_id);
     printf("enter age:");
     scanf("%d",&std.age);
     printf("enter student name:");
     scanf("%s",std.name);
     printf("enter course:");
     scanf("%s",std.course);
     fwrite(&std, sizeof(struct Student), 1,fptr);
     if(fwrite!='\0')
        printf("contents of file written successfully!\n");
     else
        printf("error writing file! \n");
     n=rename("c1.txt","StudentDetails.txt");
     remove("a.txt");
     fclose(fptr);

     fptr=fopen("c1.txt","r");
     printf("\nstudent information:\n");
     fread(&std,sizeof(struct Student),1,fptr);
     printf("student_id: %d \n", std.student_id);
     printf("age: %d \n", std.age);
     printf("name: %s \n", std.name);
     printf("course: %s \n", std.course);

     printf("\nend of file");
     fclose(fptr);
     return 0;
}
