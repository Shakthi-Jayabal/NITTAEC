#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int *m = (int*)malloc(5 * sizeof(int));
    int *c = (int*)calloc(5, sizeof(int));

    for(i=0;i<5;i++)
    {
        printf("%p\n",&m[i]);
        printf("%d\n",m[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("%p\n",&c[i]);
        printf("%d\n",c[i]);
    }

    free(m);
    free(c);
    return 0;
}

/*
=====================================
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int i;

    arr=(int*)malloc(3*sizeof(int));

    printf("Enter 3 numbers:\n");

    for(i=0;i<3;i++)
        scanf("%d",&arr[i]);

    arr=(int*)realloc(arr,5*sizeof(int));

    printf("Enter 2 more numbers:\n");

    for(i=3;i<5;i++)
        scanf("%d",&arr[i]);

    printf("All Numbers:\n");

    for(i=0;i<5;i++)
        printf("%d ",arr[i]);

    free(arr);

    return 0;
}
*/
