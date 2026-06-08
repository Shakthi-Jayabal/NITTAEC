#include<stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(i =0;i<n;i++)
        scanf("%d",&arr[i]);
        i=0,j=n-1;
        while(i<=j)
        {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           i++;
           j--;
g
        }
         for(i =0;i<n;i++)
        printf("%d",arr[i]);
        return 0;
}
