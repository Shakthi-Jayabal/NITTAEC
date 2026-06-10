#include<stdio.h>
#include<string.h>
int main()
{
   char str[60];
   char str2[60];
   char str3[60];
   //str="hello";
   //int arr[10];
   //arr=7;
   strcpy(str,"hello");
   scanf("%s",str2);
   getchar();
   gets(str3);
   printf("\n%s",str);
 printf("\n%s",str3);
 puts(str2);

  return 0;
}
