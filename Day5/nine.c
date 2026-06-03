#include<stdio.h>
int main()
{
    int row,col,num=1;
    for(row=1;row<=5;row++)
    {
        num=row;
        for(col=1;col<=5;col++)
        {
            if(row%2!=0 && col==5)
             printf("%d",num+1);
            else if(row%2==0 && col==1)
                printf("%d",num+1);
            else
                printf("%d",num);
        }
        printf("\n");
    }


    return 0;
}




/*11112
32222
33334
54444
55556*/
