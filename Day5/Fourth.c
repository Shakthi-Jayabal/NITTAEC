#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d",);
    for(row=nrow;row>=1;row--)
    {
        for(col=1;col<=nrow;col++)
        {
            if(col<row)
                printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
