#include<stdio.h>
int main()
{
	int i;
	char username[20],password[20];
	for(i=1;i<=3;i++){	
	scanf("%s %s",username,password);
	if(strcmp(username,"user123")==0&&strcmp(password,"pass123")==0)
	{
		printf("Logged in");
		break;//return 0;
	}
	else{
		if(i==3)
		{
			printf("Card blocked..Max attempt excceded");
			break;
		}
		printf("\n Invalid creds please try again");
	}
}
	return 0;
}
