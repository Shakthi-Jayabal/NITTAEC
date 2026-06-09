#include<stdio.h>
void display();//declartional optional
void display()
{
    printf("\nThe function block");
}
int main()
{
   printf("\nInside main");
display();
   printf("\nAfter the function call");
    return 0;
}
/*


returntype functioname(datatype variablename,....)


#include<stdio.h>
void display();
int main()
{
   printf("\nInside main");
   display();
   printf("\nAfter the function call");
    return 0;
}
void display()
{
    printf("\nThe function block");
}
*/
