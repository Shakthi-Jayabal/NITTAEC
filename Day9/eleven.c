#include<stdio.h>
int main()
{

    int arr[]={10,20,30};
    printf("\narr[0]:%d",arr[0]);//10
    printf("\narr[0]:%d",*arr);//10
    for(int i =0;i<3;i++)
    {
        printf("\n *arr[%d]:%d",i,*(arr+i));
    }
     for(int i =0;i<3;i++)
    {
        printf("\n arr[%d]:%d",i,(arr+i));
    }
     for(int i =0;i<3;i++)
    {
        printf("\n arr[%d]:%d",i,*arr+i);
    }

}
