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
				x=x/10;
				s+=x;

		}
		printf("The sum of numbers after deleting last term is  %d",s);
		return 0;
}