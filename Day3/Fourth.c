#include<stdio.h>
int main()
{
	int amt,avil5,avil1,needed5=0,needed1=0;
	scanf("%d%d%d",&amt,&avil5,&avil1);
	if(amt>=5)
	{
		needed5=amt/5;
		if(needed5>avil5){
		
		needed5=avil5;
	}
		amt=amt-(neede5*5);
		
	}
	if(amt>=1)
	{
		needed1=amt/1;
		if(needed1>avil1)
		needed1=avil1
		amt=amt-(needed1*1);
	}
	if(amt==0)
	{
		printf("\nNeeded 5:%d",needed5);
		printf("\nNeeded 1:%d",needed1);
	}
	else{
		printf("-1");
	}
	return 0;
}

//avil5=3
//avil1=13
//amt=21
//
//21/5=4>3  || 4=4  ||2<4
//21-(5*3)=6
//6-3=3
