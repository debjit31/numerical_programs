#include<stdio.h>
float f(float x)
{
	return 1/(1+(x*x));
}
int main()
{
	float x[100],y[100],h,s,ans=0.0,b,a;
	int n,i;
	printf("Enter the values of a,b,n :- ");
	scanf("%f%f%d",&a,&b,&n);
	h = (b-a)/n;
	for(i=0;i<=n;i++)
	{
		x[i] = a+i*h;
		y[i] = f(x[i]);
		printf("%f\t%f\n",x[i],y[i]);
	}
	s = 0.0;
	for(i=1;i<n;i++)
	{
		
		s = s + y[i];
	}
	ans = (h/2)*(y[0]+y[n]+2*s);
	printf("The answer is = %f",ans);
	
}
