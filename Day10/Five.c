#include<stdio.h>
void sumFun(int arr[])
{
    int n=sizeof(arr)/sizeof(arr[0]),sum=0;

    for(int i =0;i<=n;i++)
    {
        sum=sum+arr[i];

    }
    printf("\nSum:%d",sum);
}
int main()
{

    int arr[]={10,20,30};
    sumFun(arr);
    return 0;
}
