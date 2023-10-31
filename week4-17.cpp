/*pattern 17*/
#include<stdio.h>
int main()
{
	int i,j,n,k=0;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d ",++k);
		}
	printf("\n");
    }
}
