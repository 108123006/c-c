#include<stdio.h>

int main()
{
	int i;
	char a[100]={"hello"};
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",'a[i]'-22);
	}
	return 0;
}
    
