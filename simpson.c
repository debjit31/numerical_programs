#include<stdio.h>
float f(float x)
{
	return (x/(1+x));
}
int main()
{
	float x[100],y[100],h,so,se,ans=0.0,b,a;
	int n,i;
	printf("Enter the values of a,b,n :- ");
	scanf("%f%f%d",&a,&b,&n);
	h = (b-a)/6;
	/*if(h%2==1)
		h = h+1;*/
	for(i=0;i<=n;i++)
	{
		x[i] = a+i*h;
		y[i] = f(x[i]);
		printf("%.4f\n",y[i]);
	}
	for(i=1;i<n;i++)
	{
		so = 0.0;
		se = 0.0;
		if(i%2==1)
			so = so + y[i];
		else
			se = se + y[i];
	}
	ans = (h/3)*(y[0]+y[n]+4*so+2*se);
	printf("The answer is = %f",ans);
	
}
