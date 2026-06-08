#include<stdio.h>
int main()
{
    int nrow,ncol,sum=0;
    scanf ("%d %d",&nrow,&ncol);
    int arr[nrow][ncol];
    for(int row=0;row<nrow;row++)
    {
        for(int col=0;col<ncol;col++)
        {

            scanf("%d",&arr[row][col]);
        }
    }
    for(int row=0;row<nrow;row++)
    {    sum=0;
        for(int col=0;col<ncol;col++)
        {
             if(row==col){
            sum=sum+arr[row][col];
             }
        }
        printf("\n %d",sum);
    }

    return 0;
}

/*
3
2
10 15
6  4
5  2

25
10
7*/
