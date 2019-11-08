#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,h,k;
	float R;            
	printf("Let the eqn of a circle be x*x+y*y+a*x+b*y+c=0");
	printf("\nEnterthe value of a,b,c=");
	scanf("%d %d %d",&a,&b,&c);
	h=-a/2;
	k=-b/2;
	R=sqrt(h*h+k*k-c);
	printf("\nCentre of the circle is(%d,%d)",h,k);
	printf("\nRadius of circle is %f",R);
	printf("\nThe eqn of circle is x*x+y*y+(%d)x+(%d)y+(%d)",a,b,c);
}
