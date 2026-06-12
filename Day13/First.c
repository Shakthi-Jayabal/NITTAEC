#include<stdio.h>
int main()
{
    int nholes,i,nballs;
    scanf("%d",&nholes);
    int holes[nholes],capacity[nholes];
    for(i=0;i<nholes;i++)
    {
        scanf("%d",&holes[i]);
        capacity[i]=i+1;
    }
    scanf("%d",&nballs);
    int balls[nballs],position[nballs];
     for(i=0;i<nballs;i++)
    position[i]=0;
    for(i=0;i<nballs;i++)
    {
        scanf("%d",&balls[i]);
    }

    for(int ball=0;ball<nballs;ball++)
     {
for(int hole=nholes-1;hole>=0;hole--)
        {
    if(balls[ball]<=holes[hole]&&capacity[hole]!=0)
            {
                position[ball]=hole+1;
                capacity[hole]--;
                break;
            }
        }
     }

     for(i=0;i<nballs;i++)
        printf("\n%d ",position[i]);
    return 0;



/*
Holes and balls
Input :
3
21 3 6
11
20 15 5 7 10 4 2 1 3 6 8

Output :

1 0 3 0 0 3 3 2 2 0 0

20
20<=6
20<=3
20<=21 T  20 ->1capcity--    capacity={3,2,1}=>{3,2,0}  ->1

15
15<=6
15<=3
15<=21 T if(capacity!=0)  ->0


5
5<=6  T  if(capacity!=0) capacuty -- capCITY={2,2,0}-->3
*/
