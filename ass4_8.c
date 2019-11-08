#include<stdio.h>

int main()
{
	for(int i=1;i<=200;i++)
	{
		if(i%3==0)
		{
			if(i%5!=0)
				printf("%d ",i);
		}
		else if(i%5==0)
			printf("%d ",i);
	}	
	return 0;
}