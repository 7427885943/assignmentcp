#include<stdio.h>
int main()
{
		int n,x,s=0;
		printf("how many no. you want to enter\n");
		scanf("%d",&n);
		printf("Now enter the no.\n");
		for (int i=0;i<n;i++)
		{
				scanf("%d",&x);
				s+=(x%10);

		}
		printf("The sum of last digits of the numbers is  %d",s);

		return 0;
}