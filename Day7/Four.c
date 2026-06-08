#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
       sum=sum+arr[i];
       arr[i]=sum;
    }
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}


/*1480.Running sum
4
1 2 3 4
1 3 6 10
*/
