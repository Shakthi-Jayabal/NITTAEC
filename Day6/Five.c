#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=1;
    printf("Enter a number: \n");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("Perfect Number ");
    }else{
    printf("Not Perfect");
    }
    return 0;
}






5*5 = 25

