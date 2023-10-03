/*n natural numbers*/
#include<stdio.h>
int main()
{
	int n,i,s;
	scanf("%d",&n);
	for(i=1,s=1;i<=n;i+=1)
	s=s*i;
	printf("sum is %d",s);
	return 0;
}
