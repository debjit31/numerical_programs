#include<stdio.h>
int main()
{
	float x[10], y[10],v,prod,prod1,sum = 0.0;
	int i,j,n;
	printf("Enter the number of elements :-");
	scanf("%d",&n);
	printf("Enter the values of x \n");
	for(i=0;i<n;i++)
		scanf("%f",&x[i]);
	printf("Enter the values of y \n ");
	for(i=0;i<n;i++)
		scanf("%f",&y[i]);
	printf("Enter the value of v :- ");
	scanf("%f",&v);
	for(i=0;i<n;i++)
	{
		prod=1;
		prod1=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				prod = prod*(v-x[j]);
				prod1=prod1*(x[i]-x[j]);

			}			
		}
		sum = sum + ((prod/prod1)*y[i]);
	}
	printf("Value of y :- %f",sum);
	
	
	
}
