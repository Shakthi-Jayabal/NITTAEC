#include<stdio.h>
int main()
{
    int row,col,num=1;
    for(row=1;row<=5;row++)
    {   //num=(row==5)?0:row;
        if(row==5)
            num=0;
        else
            num=row;

        for(col=1;col<=5;col++)
        {
            printf("%d",num);
            num++;
            if(num==5)
                num=0;
        }
        printf("\n");
    }
    return 0;
}


/*
R1=12340
R2=23401
R3=34012
R4=40123
R5=01234

*****
*****
*****
*****
*****
*/
