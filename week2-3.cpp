/*electricity bill*/
#include<stdio.h>
int main()
{
	int ef,u,r;
    printf(" enter units");
    scanf("%d",&u);
    if(u<=100)
    {
    	ef=u*5;
    	printf("your electric fare is %d",ef);	
	}
	else if(u>=100)
	{
		ef=u*8;
		printf("ur electric fare is %d",ef);
	}
	return 0;
	
	
}
