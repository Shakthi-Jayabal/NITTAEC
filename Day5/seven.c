#include<stdio.h>
int main()
{int row,col,num=1,flag=0;
    char ch ='A';
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)
        {
            if(row%2==0 && col==1)
            {
               flag=0;
            }
            else if(row%2!=0&&col==1){
               flag=1;
            }
                if(flag==1)
                {
                    printf("%c",ch);
                    ch++;
                    flag=0;
                }
                else{
                    printf("%d",num);
                    num++;
                    flag=1;
                }


        }
        printf("\n");

    }

    return 0;
}
