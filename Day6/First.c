/*6234=4+3+2+6
      7
        7+2
        9 +6= 15


6234%10=4         digit=num%10
0+4=4             sum=sum+digit
6234/10=623       num=num/10

623%10=3
3+4=7
623/10=62

62%10=2
7+2=9
62/10=6

6%10=6
9+6=15
6/10=0
*/
#include<stdio.h>
int main(){
int num,digit,sum=0;
scanf("%d",&num);
while(num>0)
{
    digit=num%10;
    sum=sum+digit;
    num=num/10;
}
printf("%d",sum);
return 0;
}
