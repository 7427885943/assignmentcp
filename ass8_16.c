#include<stdio.h>
int main()
{
			int n,x,s=0,y=1;
			
		printf("how many no. you want to enter\n");
		scanf("%d",&n);
		printf("Now enter the no.\n");
		for (int i=1;i<=n;i++)
		{
				scanf("%d",&x);
				if(x%2==0)
				{s+=y*x;
					y++;
				}

		}
		

		printf(" The weighted sum of even no. is %d",s);
		return 0;
}