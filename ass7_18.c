#include<stdio.h>
#include<math.h>
void main()
{
    int n,j;
    float sum=0;
    printf("enter the number of dimensions of vector:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d,",&j);
        sum=sum+(j*j);
    }
    printf("magnitude of your vector is:%f",sqrt(sum));

}
