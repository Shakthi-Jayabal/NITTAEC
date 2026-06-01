#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
//	if(num%2==0)
//	printf("\nEven");
//	else
//	printf("\nOdd");
(num%2==0)?printf("\nEven"):printf("\nOdd");
	return 0;	
}
