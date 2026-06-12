#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],dp[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    dp[0]=arr[0];
    if(arr[0]>arr[1])
        dp[1]=arr[0];
    else
        dp[1]=arr[1];
    for(i=2;i<n;i++){
        if((arr[i]+dp[i-2])>dp[i-1])
            dp[i]=arr[i]+dp[i-2];
        else
            dp[i]=dp[i-1];

    }
    printf("%d",dp[n-1]);
    return 0;
}
