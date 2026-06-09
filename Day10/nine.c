#include<stdio.h>
int sumFun(int a=0,int b=0)
{
    int sum=a+b;

    return sum;
}
int main()
{
    printf("\n a,b:%d",sumFun(10,20));
   printf("\n a,b:%d",sumFun(10));
   // printf("\n a,b:%d",sumFun(10,20,30));
    return 0;
}
