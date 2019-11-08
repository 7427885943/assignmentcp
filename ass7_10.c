#include<stdio.h>
void main()
{
    int a,b,c;
    float d,x;
    printf("enter line equation in explict form:\n");
    scanf("%dx%dy%d",&a,&b,&c);
    d=a;
    x=((-c)/d);
    printf("the x-intercept is:%f",x);
}
