/*length of a number*/
#include<stdio.h>
int main()
{
	int n,i,l;
	printf("enter a number");
	scanf("%d",&n);
	for(i=n,l=0;i>0;i=i/10)
	l=l+1;
	printf("length is %d",l);
	return 0;
}

