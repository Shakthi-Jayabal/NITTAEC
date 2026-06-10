#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Hello";
    char str2[]="Jack Sparrow";
    char str3[strlen(str)+strlen(str2)];
    strcpy(str3,strcat(str2,str));
    printf("%s",str3);

    return 0;
}
