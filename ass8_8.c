#include<stdio.h>
int main()
{
			int n,x,y,z,s=0;
		printf("how many no. you want to enter\n");
		scanf("%d",&n);
		printf("Now enter the no.\n");
		for (int i=1;i<=n;i++)
		{
				scanf("%d",&x);
				s+=i*x;
				

		}
		printf("The weighted sum of numbers is  %d",s);
		return 0;
}