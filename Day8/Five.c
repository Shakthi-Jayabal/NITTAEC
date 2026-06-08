#include<stdio.h>
int main()
{
    int ncls,nstu,nsub,stu,sub,cls;
    scanf("%d %d %d",&cls,&nstu,&nsub);
    int dep[ncls][nstu][nsub];
    for(cls=0;cls<ncls;cls++)
    {
         printf("\n class %d",cls);

    for(stu=0;stu<nstu;stu++)
    {
        printf("\n Student %d",stu);
        for(sub=0;sub<nsub;sub++){
        scanf("%d",&dep[cls][stu][sub]);
        }
    }}
    for(cls=0;cls<ncls;cls++)
    {
         printf("\n class %d",cls);
    for(stu=0;stu<nstu;stu++)
    {
        printf("\n Student %d",stu);
        for(sub=0;sub<nsub;sub++){
        printf("\n Address %d  ",&dep[cls][stu][sub]);
        printf("- Value %d",dep[cls][stu][sub]);
        }

    }

    }
    return 0;
}

