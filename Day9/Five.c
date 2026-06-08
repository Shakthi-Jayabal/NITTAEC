#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n][n];
    int top =0,bottom=n-1,left=0,right=n-1,count=1;
    while(top<=bottom &&left<=right)
    {
        //left to right
        for(i=left;i<right;i++)
        {
          arr[top][i] =count;
          count++;
        }
        top++;
        //top to bottom
        for(i=top;i<=bottom;i++)
        {
            arr[i][right]=count;
            count++;
        }
        right--;

        //right to left
        if(top<=bottom)
        {
            for(i=right;i>=left;i--)
            {
            arr[bottom][i]=count;
            count++;
            }
            bottom--;
        }
        //bottom to top
        if(left<=right)
        {
            for(i=bottom;i>=top;i--)
            {
            arr[i][left]=count;
            count++;
            }
            left++;
        }

    }
    for(int row=0;row<n;row++)
    {

        for(int col=0;col<n;col++)
        {

            printf("%d",arr[row][col]);
        }
        printf("\n");
    }
    return 0;
}
