/* to swap two numbers without third variable*/
#include<stdio.h>
int main()
{
	int a,b;
	printf(" enter a and b");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a and b is %d %d",a,b);
	return 0;
}
