#include<stdio.h>
int main()
{
int amt,dis;	
scanf("%d",&amt);
	if(amt>=10000)
	{
		dis=700;
		printf("\n%d\n%d",dis,amt-dis);
	}
	else if(amt>=5000)
	{
		dis=100;
		printf("\n%d\n%d",dis,amt-dis);
	}
	else if(amt>=1000){
		dis=50;
		printf("\n%d\n%d",dis,amt-dis);
	}
	else{
		dis=0;
			printf("\n%d\n%d",dis,amt-dis);
	}
	return 0;
}
//1000-50
//5000-500
//10000-700
//
//1000>=amt<5000
//false<5000
//
//amt>=1000 &&amt<5000

//Test case
//12000
//700
//11300
