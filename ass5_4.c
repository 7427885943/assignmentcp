#include<stdio.h>
void main()
{
    int i,j,m,a,b,k;
    for(i=0;i<6;i++)
    {
        m=0;a=3;b=3;k=-2;
        for(j=0;j<30;j++)
        {
            if(j==15)
            {   m=15;
                a=3;b=3;k=-2;
            }
            if((i%2!=0) && (j==m) )
            {
                if((j<6) || (j>14 && j<21))
                {
                    printf("*");
                    m=m+a;
                    a=a-1;
                }
                if((j>=6 && j<=12) || j>=21)
                {
                    printf("*");
                    m=m+b;
                    b=b+k;
                    k=k+3;
                }
            }
            else
            {
                printf("0");
            }
        }
    printf("\n");
    }

}
