#include<stdio.h>
#include<string.h>
struct Department{
int depid;
char depname[30];
char depHead[30];
};
struct Employee{
    int empid;
    char name[30];
    float sal;
    char role[30];
    struct Department dep;//structure with  structure
}emp1,emp2;
int main()
{//int a;
  // struct Employee emp1;
  // struct Employee emp2={101,"Sinchana",35000,"Dev"}; ;
   emp1.empid=101;
   emp1.sal=450000;
   strcpy(emp1.name,"Disha");
   strcpy(emp1.role,"Tester");
   emp1.dep.depid=1001;
   strcpy(emp1.dep.depname,"Testing");
   strcpy(emp1.dep.depHead,"Danerys");
   printf("\nEmpid:%d",emp1.empid);
printf("\nName:%s",emp1.name);
    printf("\nSal:%f",emp1.sal);
    printf("\nRole:%s",emp1.role);
    printf("\n Dep id :%d",emp1.dep.depid);
    printf("\nDep Name:%s",emp1.dep.depname);
    printf("\n Dep Head;%s",emp1.dep.depHead);

    printf("\nEmpid:%d",emp2.empid);
    printf("\nName:%s",emp2.name);
    printf("\nSal:%f",emp2.sal);
    printf("\nRole:%s",emp2.role);
    return 0;
}
