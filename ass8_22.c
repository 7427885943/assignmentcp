#include<stdio.h>
int main()
{
			int n,x,p=0,z=0;
			int s=0;
		printf("how many no. you want to enter\n");
		scanf("%d",&n);
		printf("Now enter the no.\n");
		for (int i=0;i<n;i++)
		{       
				scanf("%d",&x);
				
				if(p!=0)
				p--;
				if(p==0)
					{
						z++;
						p=z;
						s+=x;
					
				}

			
		}	

		printf("The sum of numbers in the given pattern is  %d",s);
		return 0;
}