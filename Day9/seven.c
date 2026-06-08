#include<stdio.h>
int main()
{
    int a =10;
    int **b=&a;//error incompatiable types
    printf("\n*b:%d",*b);
    printf("\n**%d",**b);

    return 0;
}
