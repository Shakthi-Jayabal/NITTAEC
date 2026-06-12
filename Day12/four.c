#include<stdio.h>
#include<string.h>
union Employee{
    int empid;
    char name[50];
    float sal;
    char role[30];
};
int main()
{
   union Employee emp1;
   union Employee emp2;

   emp1.empid=101;
   emp1.sal=450000;
   strcpy(emp1.name,"Disha");
   strcpy(emp1.role,"Tester");

    printf("\nEmpid:%d",emp1.empid);
printf("\nName:%s",emp1.name);
    printf("\nSal:%f",emp1.sal);
    printf("\nRole:%s",emp1.role);

   emp2.empid=102;
   emp2.sal=350000;
   strcpy(emp2.name,"Sansa");
   strcpy(emp2.role,"Developer");

  printf("\nEmpid:%d",emp2.empid);
    printf("\nName:%s",emp2.name);
    printf("\nSal:%f",emp2.sal);
    printf("\nRole:%s",emp2.role);

    return 0;
}
