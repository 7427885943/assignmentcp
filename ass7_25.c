#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the numbers(separated by ','):\n");
    scanf("%1d%d,%1d",&a,&c,&b);    //c stores first number's garbage digits(except 1st digit)
    printf("your number's first digit multiplication is:%d",a*b);

}
