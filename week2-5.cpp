/*check equality of threee numbers*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers a b and c");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c)
	{
		printf("equal");
	}
	else
	{
		printf("unequal");
	}
	return 0;
}
