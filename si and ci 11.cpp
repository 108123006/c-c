/*to calculate simple and compound interest */
#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,n,si,ci;
	printf(" enter the values");
	scanf("%f%f%f%f",&p,&r,&t,&n);
	si=(p*r*t)/100;
	printf("simple interest is %f%%",si);
	ci=pow((p+(r/n)),(n*t));
	printf("compound interest is %f%%",ci);
	return 0;
		
}
