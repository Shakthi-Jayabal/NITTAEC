#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],temp;
    int i,j;
    fgets(str,sizeof(str),stdin);
    for(i=0,j=strlen(str)-1;i<=j;i++)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;

    }
    printf("%s",str);

    return 0;
}
