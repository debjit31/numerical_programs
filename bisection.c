#include<stdio.h>
#include<math.h>
void bisection(float,float);
float fn(float x)
{
	float func;
	func = pow(x,3) -3*x + 1.06;
	return func;
}
int main()
{
	float a, b;
	printf("Enter a number = ");
	scanf("%f",&a);
	printf("Enter a number = ");
	scanf("%f",&b);
	bisection(a,b);
}
void bisection(float a, float b)
{
	float x;
	if(fn(a)*fn(b)>=0)
	{
		printf("Wrong Range Selected!!!!\n");
		main();
	}
	else
	{
		do{
			x=(a+b)/2;
			if(fn(x) == 0)
			{
				printf("The root is = %.4f",x);
			}
			else if(fn(a)*fn(x)<0)
				b=x;
			else
				a=x;
		  }while(fabs(a-b)>0.0001);
		printf("The root is = %.4f",x);
	}
}
