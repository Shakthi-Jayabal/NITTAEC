#include<stdio.h>
int main()
{
	int i=1;
	for(;i<6;i++)
	{
		printf("\n%d",i);
	}
	i=1;
	for(;i<6;)
	{
		printf("\n%d",i);
		i++;
	}
	i=1;
for(;;)
	{
		printf("\n%d",i);
		i++;
		if(i>=6)
		break;
	}
//for(;)//error
//	{
//		printf("\n%d",i);
//		i++;
//		if(i>=6)
//		break;
//	}
	
	return 0;
}
