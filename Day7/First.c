#include<stdio.h>
int main()
{
    int a,i;
    int arr[3];
    scanf("%d",&a);
    printf("\na:%d",a);
    printf("\naddress of a:%d",&a);
    /*
    scanf("%d",&arr[0]);
    scanf("%d",&arr[1]);
    scanf("%d",&arr[2]);*/

    for(int i =0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }

    /*
    printf("\n%d",arr[0]);
    printf("\n%d",arr[1]);
    printf("\n%d",arr[2]);*/

    for(i=0;i<3;i++)
    {
        printf("\n%d",arr[i]);
    }
    printf("\narr:%d",arr);
     printf("\naddress arr:%d",arr);
    for(i=0;i<3;i++)
    {
        printf("\naddress of arr[%d]:%d value arr[%d]:%d",i,&arr[i],i,arr[i]);
    }
    return 0;
}
