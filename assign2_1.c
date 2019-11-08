#include<stdio.h>
#include<math.h>
int main()
{
        int a,b,c,d;
	float s,A;
	printf("Enter the sides a,b,c of the triangle= ");
	scanf("%d %d %d",&a ,&b ,&c);
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area= %f",A);

}
