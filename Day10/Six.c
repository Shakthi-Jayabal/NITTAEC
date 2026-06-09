#include<stdio.h>
int sumFun(int arr[])//function with return type
{
    int n=sizeof(arr)/sizeof(arr[0]),sum=0;
    //int val=70;
    for(int i =0;i<=n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{

    int arr[]={10,20,30};
   printf("Sum:%d", sumFun(arr));//printing the return value directly
   int sum =sumFun(arr);//assigning the return value to a varaible
   printf("\nsum:%d",sum);

    return 0;
}

