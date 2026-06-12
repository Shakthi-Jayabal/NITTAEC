#include<stdio.h>
#include<string.h>
struct Employee{
    int empid;
    char name[50];
    float sal;
    char role[30];
};

int main()
{
   struct Employee emp1;//int a
   struct Employee *emp2;//int *b

   emp2=&emp1;//b=&a

   emp1.empid=101;
   emp1.sal=450000;
   strcpy(emp1.name,"Disha");
   strcpy(emp1.role,"Tester");

    printf("\nEmpid:%d",emp2->empid);
    printf("\nName:%s",emp2->name);
    printf("\nSal:%f",emp2->sal);
    printf("\nRole:%s",emp2->role);

   return 0;
}
