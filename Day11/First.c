#include<stdio.h>
#include<string.h>
int main()
{
    int i =0;
    char str[]="Hai";
    for(i=0;i<4;i++)
    {
        printf("\n%c",str[i]);
    }
    printf("Sizeof:%d",sizeof(str));//no of char +1(null chacter)
    printf("%s",str);
    printf("Length of str:%d",strlen(str));
    return 0;
}





/*
Function	Purpose
strlen(str)	Find length of string
strcpy(dest, src)	Copy string
strncpy(dest, src, n)	Copy first n characters
strcat(str1, str2)	Concatenate strings
strncat(str1, str2, n)	Concatenate n characters
strcmp(str1, str2)	Compare strings
strncmp(str1, str2, n)	Compare first n characters
strchr(str, ch)	Find first occurrence of character
strrchr(str, ch)	Find last occurrence of character
strstr(str, sub)	Find substring
strtok(str, delim)	Split string into tokens
toupper(ch)	Convert to uppercase
tolower(ch)	Convert to lowercase
*/
