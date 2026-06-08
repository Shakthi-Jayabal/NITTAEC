#include<stdio.h>
int main()
{   int n,i,search;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            for(;i<n-1;i++)
            {
                arr[i]=arr[i+1];
            }
            arr[i]=-1;
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
