#include<stdio.h>
int main(){
    int num,prod,digit,rev,srev,rq;
    scanf("%d",&num);//12
    prod=num*num;//144
    printf("the product is %d",prod);
    while(num!=0)
    {
        digit=num%10;
        rev=rev*10+digit;//21
        num=num/10;
    }

    rq=rev*rev;//441
    printf("\nthe revrse number is %d",rq);
    while(prod!=0)
    {
        digit=prod%10;
        srev=srev*10+digit;//441
        prod=prod/10;
    }
    if(rq==srev)
        printf("\nadam number");
    else
        printf("\n not a adam number");

return 0;
}





