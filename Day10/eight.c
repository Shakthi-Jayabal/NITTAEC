#include<stdio.h>
void fun(int a ,int b)
{
    a=a+10;
    b=b+20;
    printf("\n value of a in func call:%d",a);
    printf("\n value of b in func call:%d",b);
    //return a- returning only a
    //return b-returning only b
    //return a,b -returns only b
}
int main()
{   int a =10;
    int b =50;
    printf("\n value of a before func call:%d",a);
    printf("\n value of b before func call:%d",b);
    fun(a,b);
    printf("\n value of a after func call:%d",a);
    printf("\n value of b after func call:%d",b);
    return 0;
}
