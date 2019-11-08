#include<stdio.h>
int main()
{
			int n,x;
			int y=0,s=0;
		printf("how many no. you want to enter\n");
		scanf("%d",&n);
		printf("Now enter the no.\n");
		for (int i=1;i<=n;i++)
		{       
				scanf("%d",&x);
			if(x%2==0)
			{
				y++;
				if(y<=2)
					continue;
			}
		else

			{
				if(y<2)
				{
					y=0;
					continue;
			}
		}
			s+=x;
		}


		printf("The sum of numbers after two consecutive even no. is %d",s);
		return 0;
}