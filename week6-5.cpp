/*reverse without */
#include<stdio.h>
int main()
{
	
	int i,n;
	printf("enter the lenght");
	scanf("%d",&n);
	
	char a[n],s[n];
	printf("enter the string");
	scanf("%s",a);
	
	for(i=0;a[i]!='\0';i++)
	  s[n-i-1]=a[i];
	printf("reverse is %s",s);
	return 0;  
	
}
