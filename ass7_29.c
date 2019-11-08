#include<stdio.h>
#include<math.h>
void main()
{
    int num,p,n,sum=0;
    printf("enter number of numbers you want to perform exponents\n");
    scanf("%d",&n);
    printf("enter the numbers\n");
for(int i=0;i<n;i++)
    {
        scanf("%d,%d,",&num,&p);
        sum=sum+pow(num,p);
    }
    printf("%d",sum);
}
