#include<stdio.h>
void main()
{
    int n,r,i,sumr=0,sumi=0;
    printf("how many complex numbers do you want to add:\n");
    scanf("%d",&n);
    printf("enter the complex numbers(separated by ','):\n");
    for(int j=0;j<n;j++)
    {
        scanf("%d%di,",&r,&i);
        sumr=sumr+r;
        sumi=sumi+i;
    }
    if(sumi>0)
    printf("the sum of all complex numbers is = %d+%di",sumr,sumi);
    else
    printf("the sum of all complex numbers is = %d%di",sumr,sumi);
}
