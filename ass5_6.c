#include<stdio.h>
void main()
{
    int i,j,m;
    for(i=0;i<4;i++)
    {   m=0;
        for(j=0;j<20;j++)
        {
            if(i%2==0)
            {   if(j==m)
                {
                    printf("0");
                    m+=5;
                }
                else
                {
                    printf("*");
                }
            }
            if(i%2!=0)
            {   if(j==m)
                {
                    printf("*");
                    m+=5;
                }
                else
                {
                    printf("0");
                }
            }
        }
    printf("\n");
    }
}
