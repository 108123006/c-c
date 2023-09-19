/* to calculate the salary*/
#include<stdio.h>
int main()
{
	float g,h,b,d,t,m;
	scanf("%f",&b);
	d=0.44*b;
	t=0.08*b;
	int r;
	scanf("%f",&r);
	switch(r)
	{
		case 1:m=0.27;
		break;
		case 2:m=0.24;
		break;
		case 3:m=0.18;
		break;
		default:m=0.12;
		break;
	}
	h=m*b;
	g=b+h+t+d;
	printf(" gross salary of the person is %f",g);
	return 0;
}
