#include<stdio.h>
void main()
{
    int n,n1,n2,sum=0;
    printf("enter number of pairs:\n");
    scanf("%d",&n);
    printf("enter pairs(numbers of pair separated by comma & pairs separated by ;)\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d,%d;",&n1,&n2);
        sum=sum+(n1*n2);
    }
    printf("sum is:%d",sum);
}
