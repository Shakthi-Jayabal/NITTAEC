//Returning an array
#include<stdio.h>
int *getArray()
{

    static int arr[5]={10,20,30,40,50};
    return arr;
}
int main()
{
    int *p;
    int i;
    p=getArray();

    for(int i =0;i<5;i++)
    {

        printf("\n %d",p[i]);
 //                     arr[i]
    }
    return 0;
}
