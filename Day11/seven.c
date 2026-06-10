#include<stdio.h>
int main()
{
    int count=1;
    char str[50];
    fgets(str,sizeof(str),stdin);
    for(int i =0;str[i]!='\0';i++)
    {

        if(str[i]==' ')
            count++;
    }
    printf("%d",count);

    return 0;
}

