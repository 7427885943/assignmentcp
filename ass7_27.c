#include<stdio.h>
void main()
{
    int a,n,c=1,r;
    printf("enter the number:\n");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
            if(r%2==0)
                c=r;
    }
    if(c==1)
        printf("your number does not contain any even digit");
    else
        printf("your first even digit is: %d\n",c);

}
