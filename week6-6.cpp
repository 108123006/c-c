/*first occurence */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int i,n;
	printf("enter the lenght");
	scanf("%d",&n);
	char a[n],x;
	printf("enter the string");
	scanf("%s",a);
	fflush(stdin);
	printf("enter the character");
	scanf("%c",&x);
	fflush(stdin);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==x)
		break;
		
	}
	printf(" the position of %d",i);
	return 0;
}
