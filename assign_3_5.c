#include<stdio.h>
int main()
{int a,b,slope;
	printf("give two numbers");
	scanf("%d""%d",&a,&b);
	/*the eq of line (a*x)+(b*y)+c=0*/
	slope=(-b/a);
	printf("%d",slope);
	if(a=0)
	{	
	printf("the line is vertical");
	}
	
	else if(b=0)
	{
	printf("theline is horizontal");
	}
}

