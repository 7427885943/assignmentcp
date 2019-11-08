#include<stdio.h>
int main()
{
			int n,x,z,s=0;
		printf("how many no. you want to enter\n");
		scanf("%d",&n);
		printf("Now enter the no.\n");
		for (int i=0;i<n;i++)
		{
				scanf("%d",&x);
				z=x%10;
				if(z%3==0)
				s+=x;

		}
		printf("The sum of no. whose last digit is a multiple of three  %d",s);
		return 0;
}