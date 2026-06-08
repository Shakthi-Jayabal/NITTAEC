#include<stdio.h>
int main()
{
    int a=10;
    int *b;
    b=&a;
    int **c;
    c=&b;
    int ***d;
    d=&c;
    printf("\na:%d",a);
    printf("\n&a:%d",&a);
    printf("\nb:%d",b);
    printf("\n&b:%d",&b);
    printf("\n*b:%d",*b);
    printf("\nc:%d",c);
    printf("\n&c:%d",&c);
    printf("\n*c:%d",*c);
     printf("\n**c:%d",**c);
     printf("\nd:%d",d);
    printf("\n&d:%d",&d);
    printf("\n*d:%d",*d);
     printf("\n**d:%d",**d);
       printf("\n***d:%d",***d);



    return 0;
}
