#include<stdio.h>
int main()
{
    int i,num,temp,digit,fact=1,sum=0;
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        digit=num%10;
        for(i=digit;i>=1;i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        num=num/10;
        fact=1;
    }
    if(sum==temp)
        printf("Strong number");
    else
        printf("Not a strong number");

    return 0;
}
