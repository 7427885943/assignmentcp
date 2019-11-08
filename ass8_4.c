#include<stdio.h>
int main()
{
			int n,x,y,s=0;
		printf("how many no. you want to enter\n");
		scanf("%d",&n);
		printf("Now enter the no.\n");
		for (int i=0;i<n;i++)
		{
				scanf("%d",&x);
				y=x%10;
				x=x/100;
				x=(x*10+y);
				s+=x;

		}
		printf("The sum of numbers after deleting second last term is  %d",s);
		return 0;
}