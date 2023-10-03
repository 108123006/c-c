/**/
#include<stdio.h>
int main()
{
	int n,r,p;
	printf("enter the number");
	scanf("%d",&n);
	p=n;
	r=0;
	while(n!=0)
	{
	r=r*10 +(n%10);
	n/=10;
}
    printf(" the reverse of the number is %d",r);
    if(r=p)
    printf("it is palindrome");
    else
    printf("it is not palindrome");
	return 0;
}
