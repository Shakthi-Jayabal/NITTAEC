#include<stdio.h>
int main()
{
    int num,i,flag=0;
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0){
            flag=1;
        break;
        }
    }
    if(flag==0)
   printf("Prime") ;
   else
    printf("Not a Prime");
    return 0;
}

/*
5 ->5%2==0
    5%3==0
    5%4==0
6->6%2==0  break;
   6%3==0
   6%4==0
   6%5==0

   3*5
   5*3

   2*6
   3*4
   4*3
   6*2
n/2
*/
