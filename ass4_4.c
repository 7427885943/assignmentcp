#include<stdio.h>

int main()
{
	for(int i=20;i<80;i++)
	{
		if(i>20 && i<40)
		{
			if(i%2==0)
				printf("%d ",i);
		}
		if(i>50 && i<80)
		{
			if(i%2!=0)
				printf("%d ",i);
		}
	}
	return 0;
}