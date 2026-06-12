#include<stdio.h>
#include<string.h>
struct Employee{
    int empid;
    char name[30];
    float sal;
    char role[30];
};
int main()
{
    int n;
    scanf("%d",&n);
    struct Employee emp[n];
    for(int i =0;i<n;i++)
    {
        printf("\n Employee:%d",i+1);
        scanf("%d",&emp[i].empid);
        scanf("%s",emp[i].name);
        scanf("%s",emp[i].role);
        scanf("%f",&emp[i].sal);
    }
     for(int i =0;i<n;i++)
    {
        printf("\n Employee:%d",i+1);
        printf("\n%d",emp[i].empid);
        printf("\n%s",emp[i].name);
        printf("\n%s",emp[i].role);
        printf("\n%f",emp[i].sal);
    }


}
