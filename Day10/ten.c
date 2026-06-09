#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;//base case
    else
        return n*fact(n-1);//recursive case
}
int main()
{
    int num ;
    scanf("%d",&num);
    printf("%d",fact(num));


    return 0;
}






