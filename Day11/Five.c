#include<stdio.h>
#include<string.h>
int main()
{
    int i,j =0;
    char str1[30],str2[30];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str1),stdin);
    char str3[strlen(str1)+strlen(str2)+2];
    for( i =0;str1[i]!='\0';i++)
    {
        str3[i]=str1[i];
    }
    str3[i]=' ';
    i=i+1;
    for(j=0;str2[j]='\0';j++)
    {
        str3[i]=str2[j];
        i++;
    }
    str3[i]='\0';
    printf("%s",str3);
    return 0;
}
