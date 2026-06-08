#include<stdio.h>
int main()
{
    int num,num2,sum=1,i,sum2=1;
    scanf("%d %d",&num,&num2);
    for( i=2;i<num;i++)
    {
        if(num%i==0)
            sum=sum+i;
    }
     for( i=2;i<num2;i++)
    {
        if(num2%i==0)
            sum2=sum2+i;
    }

if(sum == num2 && sum1==num)
        printf("Amicable number");
    else
        printf("Not Amicable number");
    return 0;
}
