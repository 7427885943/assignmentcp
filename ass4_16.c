#include<stdio.h>

int main()
{
	for(int i=0;i<100;i++)
	{
		if((i/10)%3!=0)
		{
			if(i%2==0)
				printf("%d ",i);
		}
	}	
	return 0;
}