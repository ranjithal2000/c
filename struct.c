#include<stdio.h>
#include<string.h>
struct Employee
{
    int emp_id;
    char name[20];
    int sal;
    struct Department
    {
        char dept_name[20];
        int dept_no;
        struct dept_div
        {
            int num_of_emp;
            char name_of_div[20];
        }div;
    }dep;
};
int main()
{
    struct Employee emp;
    printf("enter the employee details \n");
     printf("enter the employee_id, name and salary of employee\n");
     scanf("%d%s%d",&emp.emp_id,&emp.name,&emp.sal);
     printf("enter the department details\n");
     printf("enter department name and department number\n");
     scanf("%s%d",&emp.dep.dept_name,&emp.dep.dept_no);
     printf("enter the division details\n");
     printf("enter the number of employees and name of the division\n");
     scanf("%d%s",&emp.dep.div.num_of_emp,&emp.dep.div.name_of_div);
    printf("complete details are\n");
    printf("emp_id:%d \n name:%s \n sal:%d \n dept_name:%s \n dept_num:%d \n num_of_emp:%d \n name_of_div:%s \n",emp.emp_id,emp.name,emp.sal,emp.dep.dept_name,emp.dep.dept_no,emp.dep.div.num_of_emp,emp.dep.div.name_of_div);
    return 0;
}
