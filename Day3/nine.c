#include<stdio.h>
int main()
{
	int choice ; //int,char , constant var
	printf("\n 1.Enquiry\n2.Just Browsing\n3.Support");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("\n please drop you quention to our email");
		break;
		case 2:printf("\n Poke around ,I'm here if you need me");
		break;
		case 3:printf("\n Our rep will join you shortly");
	    break;
	    default:printf("\n Invalid choice");
	}
	return 0;
}





//switch(ch) 1,2,3,4,5
//{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//}
