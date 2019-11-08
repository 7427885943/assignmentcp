#include<stdio.h>
#include<math.h>
void main()
{
    int a,p=0,x,k;
    printf("enter the number:\n");
    scanf("%d",&x);
    printf("enter the n'th digit you want to know:\n");
    scanf("%d",&k);
    a=x;
    while(a!=0)
    {
        a=a/10;
        p++;
    }
    x=(x/pow(10,p-k));
    printf("nth digit is:%d",x%10);
}
