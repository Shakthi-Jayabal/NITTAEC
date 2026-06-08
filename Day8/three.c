#include<stdio.h>
int main()
{
    int n,i,j=0,temp;
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(i =0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<;i++)
    {
        if(arr[i]!=0)
        {
            temp =arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;

        }
    }
    for(i =0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
