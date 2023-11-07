#include<stdio.h>
int main()
{
	char a[100]={"hello"};
	char s[100]={"world"};
    for(int i=0;i<5;i++)
    {
    	a[5+i]=s[i];
	}
	printf("concat of a and s is %s",a);
	return 0;
}
