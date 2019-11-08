//The sum of product of two consecutive numbers without using arrays
#include<stdio.h>
int main()
{
			int n,x;
			int y=0,z=0,s=0;
		printf("how many no. you want to enter\n");
		scanf("%d",&n);
		printf("Now enter the no.\n");
		for (int i=1;i<=n;i++)
		{       
				scanf("%d",&x);
				if(i%2!=0)
				s=x;
				if(i%2==0)
						y=x;
						z+=s*y;
				

		}
		

		printf("The sum of product of two consecutive numbers is %d",z);
		return 0;
}