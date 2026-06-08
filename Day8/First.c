#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(i =0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0,j=4;i<n;i++,j--)
    {
        arr2[i]=arr1[j];
    }

    int j =4;
    for(i=0;i<n;i++)
    {
        arr2[i]=arr1[j];
        j--;
    }

    i=0;
    j=4;
    while(i<n)
    {
     arr2[i]=arr1[j];
     i++;
     j--;
    }
    for(i =0;i<n;i++)
        printf("%d",arr[i]);
    return 0;
}
