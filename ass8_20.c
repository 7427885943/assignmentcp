#include<stdio.h>
int main()
{
			int n,x,z,k,l=0;
			int y=0,s=0;
		printf("how many no. you want to enter\n");
		scanf("%d",&n);
		printf("enter the integer k");
		scanf("%d",&k);
		printf("Now enter the no.\n");
		for (int i=1;i<=n;i++)
		{       
				scanf("%d",&x);

							if(x%2==0)
								{	
									
									if(y!=k)
										y++;
								}
				if(y==k)
					{
						s+=x;
						if(l==0)
						{
							z=x;
							l++;
						}
					}
		}	

		printf("The sum of numbers after first k even no. is %d",(s-z));
		return 0;
}