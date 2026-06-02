#include<stdio.h>
int main()
{
	int start,end,i;
	scanf("%d %d",&start,&end);
//	for(i=start;i<=end;i++)
//	{
//		if(i%2==0)
//		{
//			printf("\n%d",i);
//		}
//	}

// if(start%2!=0)
// start=start+1;
//	for(i=start;i<=end;i=i+2)
//	{
//			printf("\n%d",i);
//	}

//if(start%2!=0)
// start=start+1;
// i=start;
// while(i<=end)
// {
// 	printf("\n%d",i);
// 	i=i+2;
// }


if(start%2!=0)
 start=start+1;
i=start;
 do
 {
 	printf("\n%d",i);
 	i=i+2;
 }while(i<=end);
	


	return 0;
}
