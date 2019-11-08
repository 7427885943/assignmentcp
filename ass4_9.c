#include<stdio.h>

int main()
{
	for(int i=0;i<100;i++)
	{
		int a=i%10;
		if(a%3==0)
			printf("%d ",i);
	}	
	return 0;
}