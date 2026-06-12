#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee
{
    char *name;
};
int main()
{
    struct Employee e1;
    e1.name=(char*)malloc(20);
    strcpy(e1.name,"Disha");

    struct Employee e2=e1;
    strcpy(e2.name,"Sinchana");
    printf("%s\n",e1.name);

    free(e1.name);

    return 0;
}


















