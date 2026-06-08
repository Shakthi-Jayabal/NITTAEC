#include<stdio.h>
int main()
{
    int a =10;
    char ch='a';
    double f=67.90;
    int *b=&a;
    char *c=&ch;
    double *d=&f;
   printf("\n a=%d",sizeof(a));
   printf("\n ch=%d",sizeof(ch));
   printf("\n f=%d",sizeof(f));
    printf("\n b=%d",sizeof(b));
   printf("\n c=%d",sizeof(c));
   printf("\n d=%d",sizeof(d));
    printf("\n *b=%d",sizeof(*b));
    printf("\n *c=%d",sizeof(*c));
     printf("\n *d=%d",sizeof(*d));
    return 0;
}
