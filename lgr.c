#include<stdio.h>
int main()
{
	float x[100],y[100],prod,prod1,sum = 0.0;
	int n,i,j,v;
	printf("Enter the number of values :- ");
	scanf("%d",&n);
	printf("Enter the values of x :- ");
	for(i=0;i<n;i++)
		scanf("%f",&x[i]);
	printf("Enter the values of y :- ");
	for(i=0;i<n;i++)
		scanf("%f",&y[i]);
	printf("Enter the value of x for which you want ot find y :- ");
	scanf("%d",&v);
	for(i=0;i<n;i++)
	{
		prod=1;
		prod1=1;
		for(j=0;j<n;j++)
		{
			if (i!=j)
			{
				prod = prod * (v-x[j]);
				prod1 = prod1 * (x[i] - x[j]);
			}
		}
		sum = sum + ((prod/prod1)*y[i]);
	}
	printf("Value of y is :- %f",sum);
}
