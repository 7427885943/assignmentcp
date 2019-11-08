#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c;
    float D,x,x1i,x2i;
    printf("enter the equation\n");
    scanf("%fx^2%fx%f",&a,&b,&c);
    D=((b*b)-(4*a*c));
    x=(-b/(2*a));
    if(D>0)
    {
        x1i=sqrt(D)/(2*a);
        x2i=-(sqrt(D))/(2*a);
        printf("roots are:%f\t%f",x+x1i,x+x2i);
    }
    if(D<0)
    {
        x1i=sqrt(-D)/(2*a);
        x2i=-(sqrt(-D))/(2*a);
        if(x1i>0 || x2i>0)
           {
            if(x1i>0 && x2i>0)
            {
                printf("roots are:%f+%fi\t%f+%fi",x,x1i,x,x2i);
                goto label;
            }
            if(x1i>0)
            printf("roots are:%f+%fi\t%f%fi",x,x1i,x,x2i);
            if(x2i>0)
            printf("roots are:%f%fi\t%f+%fi",x,x1i,x,x2i);

           }
        else
        {
            printf("roots are:%f%fi\t%f%fi",x,x1i,x,x2i);
        }
    }

    label:
        ;
}
