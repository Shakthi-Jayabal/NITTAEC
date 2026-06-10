#include<stdio.h>
int main()
{
    int count=0;
    char str[30];
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}

//Copy string'\0'

/*
Function
strlen(str)	            Find length of string
strcpy(dest, src)	    Copy string
strncpy(dest, src, n)	Copy first n characters
strcat(str1, str2)	    Concatenate strings
strncat(str1, str2, n)	Concatenate n characters
strcmp(str1, str2)	    Compare strings
strncmp(str1, str2, n)	Compare first n characters
strchr(str, ch)	        Find first occurrence of character
strrchr(str, ch)	    Find last occurrence of character
strstr(str, sub)	    Find substring
strtok(str, delim)	    Split string into tokens
toupper(ch)	            Convert to uppercase
tolower(ch)	            Convert to lowercase
*/
