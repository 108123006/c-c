/*to convert kilometers to meter, centimeter, millimeter*/
#include<stdio.h>
int main ()
{
	float k,m,c,mm;
	printf(" enter in km");
	scanf("%f",&k);
	m=k/1000;
	c=k/100000;
	mm=c/10;
	printf(" meter, centimeter, millimeter is %f %f %f",m,c,mm);
	return 0;
}
