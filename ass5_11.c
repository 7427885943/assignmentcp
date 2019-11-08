#include<stdio.h>
void main()
{
    int i,j,x,m=2,n=2;
    printf("0");
    for(i=0;i<7;i++)
    {
        printf("0*");
    }
    printf("\n");
    for(i=0;i<9;i++)
    {
        for(j=0;j<15;j++)
        {
            if(i%2==0)
            {
                if(j<=m)
                {   if(j<m)
                    printf("0");
                    else
                    printf("*");
                }
                else
                {
                    printf("0*");
                    j+=1;
                }
            }
            else
            {
               if(j<=n)
                {   if(j<n)
                    printf("*");
                    else
                    printf("0");
                }

                else
                {
                    printf("0*");
                j+=1;
                }
            }
        }
            if(i%2==0)
            {
                m=m+2;
            }
            else
            {
                n=n+2;
            }
    printf("\n");
    }

}

