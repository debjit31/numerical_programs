#include<stdio.h>
#define fx(x,y) (y-x)
int main()
{
	float x0,y0,h,xn;int c=1;
	printf("enter the value of X0 and Y0 :- \n");
	scanf("%f%f",&x0,&y0);
	printf("Enter the value of h and xn :- \n");
	scanf("%f%f",&h,&xn);
	float x1,y1;
	printf("Iteration\t\t");
	printf("X\t\t");
	printf("Y\n");
	while(x0<xn)
	{
		x1 = x0 + h;
		y1 = y0 + h*fx(x0,y0);
		x0 = x1;
		y0 = y1;
		printf("%d\t\t",c);
		printf("%.2f\t\t%.2f\n",x0,y0);
		c++;
	}
}
