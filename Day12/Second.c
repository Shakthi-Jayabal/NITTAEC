#include<stdio.h>
#include<string.h>
struct Employee{
    int empid;
    char name[30];
    float sal;
    char role[30];
};
int main()
{//int a;
   struct Employee emp1;
   struct Employee emp2={101,"Sinchana",35000,"Dev"}; ;
   emp1.empid=101;
   emp1.sal=450000;
   strcpy(emp1.name,"Disha");
   strcpy(emp1.role,"Tester");
   printf("\nEmpid:%d",emp1.empid);
printf("\nName:%s",emp1.name);
    printf("\nSal:%f",emp1.sal);
    printf("\nRole:%s",emp1.role);

    printf("\nEmpid:%d",emp2.empid);
    printf("\nName:%s",emp2.name);
    printf("\nSal:%f",emp2.sal);
    printf("\nRole:%s",emp2.role);
    return 0;
}
