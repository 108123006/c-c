/* to calculate the percentage of the student*/
#include<stdio.h>
int main()
{
	float m,p,c,b,e,f,t;
	printf(" enter the values of the five subjects");
	scanf("%f%f%f%f%f%f",&m,&p,&c,&b,&e,&f);
	t=(m+p+c+b+e)/f*100;
	printf("the total percentage of the student is %f%%",t);
	return 0;
	
}
