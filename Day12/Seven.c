#include<stdio.h>
#include<string.h>
typedef struct Employee{
    int empid;
    char name[50];
    float sal;
    char role[30];
    char grade;
}Employee;
void display(Employee emp)
{
    printf("\nEmpid:%d",emp.empid);
    printf("\nName:%s",emp.name);
    printf("\nSal:%f",emp.sal);
    printf("\nRole:%s",emp.role);
    printf("\nGrade:%c",emp.grade);

}
int increment(float sal)
{
    return sal+10000;
}
void applyGrade(Employee emp)
{
    emp.sal=emp.sal+10000;
    if(emp.sal>50000)
        emp.grade='A';
   else if(emp.sal>35000)
        emp.grade='B';
    else
        emp.grade='c';
}

void applyGrade(Employee *emp)
{
    emp->sal=emp->sal+10000;
    if(emp->sal>50000)
        emp->grade='A';
   else if(emp->sal>35000)
        emp->grade='B';
    else
        emp->grade='c';
}

int main()
{
   Employee emp1;
   Employee emp2;

   emp1.empid=101;
   emp1.sal=45000;
   strcpy(emp1.name,"Disha");
   strcpy(emp1.role,"Tester");

   display(emp1);
   emp1.sal=increment(emp1.sal);
   display(emp1);
   //applyGrade(emp1);//
    //display(emp1);
    applyGrade(&emp1);
    display(emp1);

   emp2.empid=102;
   emp2.sal=350000;
   strcpy(emp2.name,"Sansa");
   strcpy(emp2.role,"Developer");

   display(emp2);

    return 0;
}

