#include<stdio.h>
void main()
{
    float a1,b1,a2,b2;
    printf("enter two complex numbers(separated by comma):\n");
    scanf("%f%fi,%f%fi",&a1,&b1,&a2,&b2);
    if(b1+b2>0)
    printf("the sum of two complex numbers is = %f+%fi",(a1+a2),(b1+b2));
    else
    printf("the sum of two complex numbers is = %f%fi",(a1+a2),(b1+b2));
}
