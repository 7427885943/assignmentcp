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
				x=(x/10)%10;
				x=x*y;
				s+=x;

		}
		printf("The sum of product of last and second last digits of the no. is  %d",s);
		return 0;
}