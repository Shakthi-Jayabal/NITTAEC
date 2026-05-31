#include<stdio.h>
int main()
{	
	char str[50];
	//scanf("%s",str);
	//fgets(str,sizeof(str),stdin);
	scanf("%[^\n]",str);
	printf("\n%s",str);	
	return 0;
}




//#include<stdio.h>
//int main()
//{
//	
//	char str[50];
//	char str2[50];
//	printf("%d",sizeof(str));
//	scanf("%s",str);
//	printf("\n%s",str);
//	getchar();
//	scanf("%c",&str2[0]);
//	scanf("%c",&str2[1]);
//	scanf("%c",&str2[2]);
//	printf("\n%s",str2);
//	return 0;
//}
