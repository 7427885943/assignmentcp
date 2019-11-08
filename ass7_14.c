#include<stdio.h>
void main()
{
    int n,sum=0,j;
    printf("enter the number of numbers you want to add then enter numbers(separated by comma):\n");
    scanf("%d,",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d,",&j);
        sum=sum+j;
    }
    printf("sum is:%d",sum);
}
