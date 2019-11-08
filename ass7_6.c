#include<stdio.h>
#include<math.h>
void main()
{
    float a1,b1,c1,d;
    printf("enter vector:\n");
    scanf("%fi%fj%fk",&a1,&b1,&c1);
    d=sqrt( (a1*a1) + (b1*b1) + (c1*c1) );
    printf("the unit vector is=%fi %fj %fk",(a1/d),(b1/d),(c1/d));
}

