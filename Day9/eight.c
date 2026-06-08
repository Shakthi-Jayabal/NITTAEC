
#include<stdio.h>
int main()
{
    int a =10;
    int *b=&a;
    char ch='a';
    int *d=&ch;//error incomoatible pointer types
    printf("\n*b:%d",*b);
    printf("\n*d:%d",*d);
    return 0;
}
