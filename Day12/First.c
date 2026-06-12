#include<stdio.h>
#include<stdlib.h>
int main()
{
    char id[]="101";
   // int id1=(int)id;
   char id2[]="101abc";
   char id3[]="abc101";
   char id4[]="1a0b1";
   int id5=atoi(id);
    int id6=atoi(id2);
     int id7=atoi(id3);
      int id8=atoi(id4);
    printf("\n%d",id5);
    printf("\n%d",id6);
    printf("\n%d",id7);
    printf("\n%d",id8);

    return 0;
}
