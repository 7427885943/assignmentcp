#include<stdio.h>
int main()
{
			int n,x;
			float y,z,s;
		printf("how many no. you want to enter\n");
		scanf("%d",&n);
		printf("Now enter the no.\n");
		for (int i=1;i<=n;i++)
		{
				scanf("%d",&x);
				if(x%2==0)
				{s+=i*x;
					z+=i;
				}

		}
		y=s/z;

		printf("The average weighted sum of even numbers is  %.2f",y);
		return 0;
}