#include<stdio.h>
int main()
{
   char str1[]="horse" ;
   char str2[]="ros";
   int arr[strlen(str2)+1][strlen(str1)+1];
   for(int i =0;i<=strlen(str2);i++)
   {
       arr[i][0]=i;
   }
   for(int j =0;j<=strlen(str1);j++)
   {
       arr[0][j]=j;
   }
   for(int i =1;i<=strlen(str2);i++)
   {
       for(int j =1;j<=strlen(str1);j++)
       {
           arr[i][j]=
       }
   }


    return 0;
}


/*horse
ros

rorse - step 1
rose - step 2     rosse =>rose=>ros
ros  - step 3
*/
