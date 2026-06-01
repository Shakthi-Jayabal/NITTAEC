#include<stdio.h>
int main()
{
	int unit,total;
	scanf("%d",&unit);
	if(unit>=0&&unit<=100)
	{
		total=unit*3;
		
	}
	else if(unit>100&&unit<=300)
	{
		total=(100*3)+((unit-100)*5);
		
	}
	else if(unit>300)
	{
		total=(100*3)+(200*5)+((unit-300)*6);
	}	
	printf("Total Bill=%d",total);
	return 0;
}


70
70*3=120

120

100*3+20*5

250
100*3+150*5

300
100*3+200*5









