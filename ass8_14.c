#include<stdio.h>
int main()
{
			int n,x,y,z,s=0;
		printf("how many no. you want to enter\n");
		scanf("%d",&n);
		printf("Now enter the no.\n");
		for (int i=0;i<n;i++)
		{
				scanf("%d",&x);
				y=x%10;
				z=(x/10)%10;
				if(z>y)
				x=((((x/100)*10)+y)*10)+z;
				s+=x;

		}
		printf("The sum of no. after the last and  second digit is sorted  %d",s);
		return 0;
}