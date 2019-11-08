#include<stdio.h>
void main()
{
    int n,m,num,sumg=0,suma=0;
    printf("enter number of groups & number of numbers in each group(separated by comma):\n");
    scanf("%d,%d",&n,&m);
    printf("enter numbers in each group(separated by , & each group separated by ;):\n");
    for(int i=0;i<n;i++)
    {   sumg=0;
        for(int j=0;j<m-1;j++)
            {
                scanf("%d,",&num);
                sumg=sumg+num;
            }
                scanf("%d",&num);
                sumg=sumg+num;
    scanf(";");
    suma=suma+sumg;
    }

    printf("your sum of groups is:%d",suma);
}
