/*n natural numbers*/
#include<stdio.h>
int main()
{
	int n,i,s;
	scanf("%d%d",&n,&s);
	for(i=1;i<=n;i+=1)
	printf("%d\n",s*i);
	return 0;
}
