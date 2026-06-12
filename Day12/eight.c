#include <stdio.h>
struct Employee
{
    int id;
    char name[20];
};

int main()
{
    struct Employee emp[3];

    struct Employee *ptr;

    ptr=emp;

    for(int i=0;i<3;i++)
    {
        printf("Enter ID: ");
        scanf("%d",&(ptr+i)->id);

        printf("Enter Name: ");
        scanf("%s",(ptr+i)->name);
    }

    printf("\nEmployees\n");

    for(int i=0;i<3;i++)
    {
        printf("%d %s\n",
               (ptr+i)->id,
               (ptr+i)->name);
    }

    return 0;
}
