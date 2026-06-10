#include<stdio.h>
int main()
{
    char str[20];
    gets(str);
    int vc=0,cc=0,capital;
    for(int i =0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        vc++;
        else
        cc++;
    }
    if(vc>cc)
        capital=1;
    else
        capital=0;
    if(str[0]>='a' && str[0]<='z'&&capital==1)
          {
              str[0]=str[0]-32;
              capital=0;
          }
        else if(str[0]>='A'&&str[0]<='Z'&&capital==0)
    {
        str[0]=str[0]+32;
        capital=1;
    }
    for(int i =1;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z'&&capital==1)
          {
              str[i]=str[i]-32;
          }
        else if(str[i]>='A'&&str[i]<='Z'&&capital==0)
    {
        str[i]=str[i]+32;

    }
    if(capital==0)
        capital=1;
    else
        capital=0;
    }


    printf("%s",str);
    return 0;
}
