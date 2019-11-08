#include<stdio.h>
void main()
{
    float a1,b1,c1,a2,b2,c2;
    printf("enter two vectors(separated by comma):\n");
    scanf("%fi%fj%fk,%fi%fj%fk",&a1,&b1,&c1,&a2,&b2,&c2);
    printf("the dot product is=%f",((a1*a2)+(b1*b2)+(c1*c2)));
}
