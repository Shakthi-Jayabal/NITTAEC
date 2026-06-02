#include<stdio.h>
int main()
{
	int start,end,i;
	char choice[50];
	scanf("%d %d",&start,&end);
	scanf("%s",choice);
    if(strcmp(choice,"even")==0)
	{
		if(start%2!=0)
		start++;
	}
	else
	{
		if(start%2==0)
		start++;
	}
	for(i=start;i<=end;i=i+2)
	{
		printf("\n %d",i);
		}	
	
	return 0;
}


//5 12
//even
//6 8 10 12 14
//
//5 12
//odd
//5 7 9 11

