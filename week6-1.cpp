/*find the length of sting without strlen*/
#include<stdio.h>
int main()
{
	char a[100];
	int n=0,i;
	printf("enter string :");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
	   n++;	
	}
	printf("the length of the string is %d",n);
	
}
