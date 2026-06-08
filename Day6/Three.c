#include<stdio.h>
#include<math.h>
int main()
{
    int num, temp,count=0,digit,sum=0;
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        num/=10;
        count++;
    }
    num=temp;
    while(num!=0)
    {
        digit=num%10;
        sum+=pow(digit,count);
        num=num/10;
    }
    if(temp==sum)
        printf("Amstrong");
    else
        printf("Not Amstrong ");

    return 0;
}
