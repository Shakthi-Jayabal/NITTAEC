#include<stdio.h>
void display(int arr[],int size)
{

    for(int i =0;i<size;i++)
    {

        printf("\n %d",arr[i]);
    }
}
int main()
{
    int arr[]={10,20,30,40};
    display(arr,4);


    return 0;
}
