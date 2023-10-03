/*grade of a student*/
#include<stdio.h>
int main()
{
	int p,c,m,cs,b,e;
	printf("enter the subject marks");
	scanf("%d %d %d %d %b ",&p,&c,&cs,&m,&b);
	e=(p+c+m+cs+b)/5;
	if(e>=90)
	printf("grade A");
	else if(e>=80)
	printf("grade B");
	else if(e>=70)
	printf("grade C");
	else if(e>=60)
	printf("grade D ");
	else if(e>=40)
	printf("grade E");
	else
	printf("grade F");
	return 0;
	
}
