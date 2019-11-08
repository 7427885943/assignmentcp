#include<stdio.h>
int main()
{
			int n,x,y=0,s=0;
		printf("how many no. you want to enter\n");
		scanf("%d",&n);
		printf("Now enter the no.\n");
		for (int i=0;i<n;i++)
		{
				scanf("%d",&x);
				if(x%2!=0)
			{	y++;
				s+=x;
			}
		}
		printf("The average of odd no. is  %d",(s/y));
		return 0;
}