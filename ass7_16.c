
#include<stdio.h>
void main()
{
    int n,sum=0,j;
    printf("enter the number of numbers you want to add then enter numbers\n(separated by comma where last comma is not needed and first number should end with ;):\n");
    scanf("%d;",&n);
    for(int i=0;i<n-1;i++)
    {
        scanf("%d,",&j);
        sum=sum+j;
    }
    scanf("%d",&j);
    sum=sum+j;
    printf("sum is:%d",sum);
}

