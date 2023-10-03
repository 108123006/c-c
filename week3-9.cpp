/*fibonacci number*/
#include<stdio.h>
int main()
{
	int n,i,a=0,b=1;
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n-2;i++)
	{
    b=b+a;
	a=b-a;
}
	printf("%dth number of the fibonacci series %d",n,b);
	return 0;
}
