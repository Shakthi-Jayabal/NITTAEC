#include<stdio.h>
int main()
{
    const int a =10;
    //a=13;
    int *b=&a;
    *b=30;
    printf("\n *b:%d",*b);
    printf("\n a=%d",a);
}
