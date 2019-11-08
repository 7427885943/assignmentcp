
#include<stdio.h>

int main()
{
	int a,b,e,f,i,j,c;
	printf("give two numbers to create pattern(separated by ',')\n");
	scanf("%d,%d",&a,&b);
    e=a;f=b;
	for(i=0;i<6;i++)
	{   a=e;b=f;
		printf("(%d)(%d)",a,b);
		for(j=0;j<i;j++)
		{
			c=a+b;
			printf("(%d)",c);
			a=b;
			b=c;
		}
		printf("\n");
	}
	return 0;
}
