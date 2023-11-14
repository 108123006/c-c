#include<stdio.h>
int main()
{
	
	int i,n,t=1,m;
	printf("enter the lenght:");
	scanf("%d",&n);
    char a[n],s[n];
	printf("enter the string:");
	scanf("%s",a);
	fflush(stdin);
	printf("enter the string:");
	scanf("%s",s);
	fflush(stdin);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=s[i])
		{
		t=0;
		break;
		}
	}
	if(t==0)
	printf("not equal");
	else 
	printf("equal");

	return 0;
}
