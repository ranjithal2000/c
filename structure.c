#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int age;
};
struct staff
{
    char name[20];
    int id;
};
struct non_staff
{
    char name[20];
    int exp;
};
struct admin
{
    struct student stu[2];
    struct staff sta[2];
    struct non_staff non[2];
};
void main()
{
    struct admin ad;
    for(int i=0;i<2;i++)
    {
     printf("enter the student name and age \n");
     scanf("%s%d",&ad.stu[i].name,&ad.stu[i].age);
     printf("enter the staff name and id \n");
     scanf("%s%d",&ad.sta[i].name,&ad.sta[i].id);
     printf("enter the non-staff name and exp \n");
     scanf("%s%d",&ad.non[i].name,&ad.non[i].exp);
    }
    printf("results are:\n");
    for(int i=0;i<2;i++)
    {
        printf(" student name:%s \n student age:%d \n", ad.stu[i].name,ad.stu[i].age);
        printf(" staff name:%s \n staff id:%d \n", ad.sta[i].name,ad.sta[i].id);
        printf(" non staff name:%s \n non staff exp:%d \n", ad.non[i].name,ad.non[i].exp);
    }
}
