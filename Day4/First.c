#include<stdio.h>
#define var 10
#define var2 20
#define var3 30
int main()
{
	int ch;
		scanf("%d",&ch);
//	char ch;
//	scanf("%c",&ch);
    // const int var=10,var2=30,var3=30;
	switch(ch)
	{
		case var:printf("First case");
		break;
		case var2:printf("second case");
		break;
		case var3:printf("Third case");
		break;
	}
	return 0;
}
