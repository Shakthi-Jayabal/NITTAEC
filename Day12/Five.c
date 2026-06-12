
#include<stdio.h>
#include<string.h>
struct Employee{
    int empid;
    char name[50];
    float sal;
    char role[30];
};
int display(struct Employee emp)
{
    printf("\nEmpid:%d",emp.empid);
    printf("\nName:%s",emp.name);
    printf("\nSal:%f",emp.sal);
    printf("\nRole:%s",emp.role);

}
int main()
{
   struct Employee emp1;
   struct Employee emp2;

   emp1.empid=101;
   emp1.sal=450000;
   strcpy(emp1.name,"Disha");
   strcpy(emp1.role,"Tester");

   display(emp1);

   emp2.empid=102;
   emp2.sal=350000;
   strcpy(emp2.name,"Sansa");
   strcpy(emp2.role,"Developer");

   display(emp2);

    return 0;
}
