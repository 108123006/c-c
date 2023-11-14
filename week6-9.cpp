#include<stdio.h>
int main()
{
	
	int k,n,t=1;
	printf("enter the lenght:");
	scanf("%d",&n);
	
	char s[n];
	printf("enter the string:");
	scanf("%s",s);
	
	for(k=0;s[k]!='\0';k++)
	{
		if('a'==s[k]||'A'==s[k])
		{
			printf("a");
		}
		else if('e'==s[k]||'E'==s[k])
		{
			printf("e");
		}
		else if('i'==s[k]||'I'==s[k])
		{
			printf("i");
		}
		else if('o'==s[k]||'O'==s[k])
		{
			printf("o");
		}
		else if('u'==s[k]||'U'==s[k])
		{
			printf("u");
		}
	}
	return 0;
		
}
		
