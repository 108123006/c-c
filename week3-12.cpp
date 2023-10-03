/* sum of the digits of a number*/
#include<stdio.h>
int main()
{
	int n,s;
	printf("enter the number");
	scanf("%d",&n);
	s=0;
	while(n!=0)
	{
	s=s+n%10;
	n/=10;
}
    printf(" the sum of the digits is %d",s);
    return 0;
}
