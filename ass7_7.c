#include<stdio.h>
void main()
{
    int a1,b1,c1,a2,b2,c2;
    printf("enter two vectors(separated by comma):\n");
    scanf("%di%dj%dk,%di%dj%dk",&a1,&b1,&c1,&a2,&b2,&c2);
    printf("the cross product is=%di %dj %dk",(((b1*c2)-(c1*b2)),((-1)*(a1*c2)-(c1*a2)),((a1*b2)-(a2*b1))));
}
