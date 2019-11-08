#include<stdio.h>
void main()
{
  int i,j;
    for(i=0;i<4;i++)
    {   for(j=0;j<10;j++)
        {   if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0))
               printf("0");
            else
                printf("*");
        }
    printf("\n");
    }
}
