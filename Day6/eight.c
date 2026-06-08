#include<stdio.h>
int main()
{
    int num,digit,rev=0;
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    printf("%d",rev);
    return 0;
}


4563 => 3654
3*10=>30         rev = rev*10+digit
30+6=>36
36*10=360
360+5=365
365*10=3650
3650+4=3654

