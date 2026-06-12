#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    int *m = (int*)malloc(5 * sizeof(int));
    int *c = (int*)calloc(5, sizeof(int));

    for(i=0;i<5;i++)
    {
        printf("%d ", m[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("%d ", c[i]);
    }

    free(m);
    free(c);

    return 0;
}
