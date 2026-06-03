#include<stdio.h>
int main()
{
    int num,steps=0;
    scanf("%d",&num);
    while(num!=0){
    if(num%2==0)
        num=num/2;
    else
        num=num-1;
        steps++;
    }
    printf("\n%d",steps);

    for(step=0;num!=0;step++)
        {
    if(num%2==0)
        num=num/2;
    else
        num=num-1;

    }
     printf("\n%d",steps);


    return 0;
}
