#include<stdio.h>
void fun(int *a ,int *b)//pointer to receive the address
{
    *a=*a+10;//working on actual address
    *b=*b+20;////working on actual address
    printf("\n value of a in func call:%d",*a);
    printf("\n value of b in func call:%d",*b);
    //return a- returning only a
    //return b-returning only b
    //return a,b -returns only b
}
int main()
{   int a =10;
    int b =50;
    printf("\n value of a before func call:%d",a);
    printf("\n value of b before func call:%d",b);
    fun(&a,&b);//paasing the actual address
    printf("\n value of a after func call:%d",a);
    printf("\n value of b after func call:%d",b);
    return 0;
}



/*#include<stdio.h>
int taxCategory(int amt,char venture[])
{
    int taxval= 5000;
    if(strcmp("Tech",venture)==0 && amt>10000)
        taxvalue=500;
    else if(strcmp("Clothing",venture)==0 && amt>10000)
        taxvalue=1000;
    return taxvalue;
}
int main()
{
    int netprofit,taxvalue=5000;
    char business[30];
    taxvalue=taxCategory(netprofit,business);
    printf("profit amout:%d",netprofit-taxvalue);
    return 0;
}
*/
