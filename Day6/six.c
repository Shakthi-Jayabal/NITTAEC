#include<stdio.h>

int main()
{
int num ,count=0;
scanf("%d",&num);
temp=num;
sqnum = num*num;
while(num!=0)
{
num=num/10;
count++;
}
num=temp;
val=pow(10,count)
if(num%val==temp)
printf("automorphic");
else
printf("Not auto morphic");
return 0;
}
