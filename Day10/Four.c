#include<stdio.h>
void prodFunc(int prod,int quantity)
{

    printf("\nBill : %d X %d=%d",prod,quantity,prod*quantity);
}
int main()
{
    char prodname[15];
    int prod,quantity,n;
    printf("Items to be Billed");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        scanf("%s",&prodname);
        scanf("%d",&prod);
        scanf("%d",&quantity);
        prodFunc(prod,quantity);
    }
    return 0;
}
