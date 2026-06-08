
#include<stdio.h>
int main()
{int n,oddsum=0,evensum=0,oddplace=0,evenplace=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            evensum+=arr[i];
        else
            oddsum+=arr[i];
        if(i%2==0)
            evenplace+=arr[i];
        else
            oddplace+=arr[i];
    }
    printf("\nOdd:%d",oddsum);
    printf("\nEven:%d",evensum);
    printf("\nOddplace:%d",oddplace);
    printf("\nEvenplace:%d",evenplace);

    return 0;
}
