#include<stdio.h>
int main()
{
    int nstu,nsub,stu,sub;
    scanf("%d %d",&nstu,&nsub);
    int cls[nstu][nsub];
    for(stu=0;stu<nstu;stu++)
    {
        printf("\n Student %d",stu);
        for(sub=0;sub<nsub;sub++){
        scanf("%d",&cls[stu][sub]);
        }
    }
    for(stu=0;stu<nstu;stu++)
    {
        printf("\n Student %d",stu);
        for(sub=0;sub<nsub;sub++){
        printf("\n Address %d  ",&cls[stu][sub]);
        printf("- Value %d",cls[stu][sub]);
        }

    }


    return 0;
}
