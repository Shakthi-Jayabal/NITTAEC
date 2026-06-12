#include<stdio.h>
int fun(int arr[],int start,int stop,int n)
{
    int dp[n-1];
    dp[0]=arr[start];
    if(arr[start]>arr[start+1])
        dp[1]=arr[start];
    else
        dp[1]=arr[start+1];
    for(int i = 2;i<=stop;i++)
    {
        if(arr[start+2]+dp[i-2]>=dp[i-1])
            dp[i]=arr[start+2]+dp[i-2];
        else
            dp[i]=dp[i-1];
        start++;
    }
    return dp[n-2];
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],max1,max2;
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max1=fun(arr,0,n-2,n);
    printf("%d",max1);
    max2=fun(arr,1,n-1,n);
    printf("\n%d",max2);
    if(max1>max2)
        printf("\n%d",max1);
    else
        printf("\n%d",max2);

    return 0;
}
