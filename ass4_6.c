#include<stdio.h>

int main()
{
	for(int i=1;i<=200;i++)
	{
		if(i<20 || i>90 || (i>50 && i<70))
			printf("%d ",i);
	}
	return 0;
}