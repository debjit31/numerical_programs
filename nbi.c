#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *x,*y,first,second,diff,c=0,d=0,h,u,v,sum=0.0,f[20][20],prod=1.0;
	int n,i,j;
	printf("Enter the number of given points :- ");
	scanf("%d",&n);
	x = (float *)malloc(n*sizeof(float));
	y = (float *)malloc(n*sizeof(float));
	printf("Enter the values of x :- \n");
	for(i=0;i<n;i++)
		scanf("%f",&x[i]);
	printf("Enter the values of y :- \n");
	for(i=0;i<n;i++)
		scanf("%f",&y[i]);
	first = x[0];
	second = x[1];
	diff = second - first;
	for(i=0;i<n-1;i++)
	{
		if(x[i+1]-x[i] == diff)
			c++;
		else
			d++;
	}
	if(d==0)
	{
		h = x[1]-x[0];
		printf("Enter the value of x :- ");
		scanf("%f",&v);
		u = (v-x[n-1])/h;
		sum = y[n-1];
		for(j=0;j<n;j++)
		{
			f[0][j] = y[j];
		}
		for(i=1;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				f[i][j] = f[i-1][j+1] - f[i-1][j];
			}
		}
		for(i=1;i<n;i++)
		{
			prod=prod*((u+i-1)/i);
			sum = sum + (prod*f[i][n-1]);
		}
		printf("%f\n",sum);
	}
	else
	{
		printf("The points are not equispaced!!");
	}
	
}
