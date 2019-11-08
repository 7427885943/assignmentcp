#include<stdio.h>
void main()
{
  int i,j;
    for(i=0;i<5;i++)
    {   for(j=0;j<20;j++)
        {   if(i%2==0)
            {
               printf("*");
            }
            else
            {
                printf("*0");
                j++;
            }
        }
    printf("\n");
    }
}
