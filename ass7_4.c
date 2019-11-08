#include<stdio.h>
void main()
{
    float x1,y1,x2,y2,x3,y3;
    printf("enter the coordinates x1,y1,x2,y2\n");
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    printf("midpoint is \nx3=%f\ty3=%f",((x1+x2)/2),((y1+y2)/2));
}
