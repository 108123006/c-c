#include<stdio.h>
int main()
{
	char a[100]={"hello"};
	char s[100];
    for(int i=0;a[i]!='\0';i++)
    {
    	s[i]=a[i];
	}
	printf("copied string s is %s",s);
	return 0;
}
