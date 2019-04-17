#include<stdio.h>
void sender(int data[],int n)
{
	int i,c=0,flag=0;
	for (i=0;i<n;i++)
	{
		if(data[i] == 1)
			c++;
	}
	if(c%2==0)
		flag=0;
	else
		flag = 1;
	receiver(data,flag,n);
}
void receiver(int data[], int flag, int n)
{
	int i,p=0,c=0;
	data[2] = 1;
	for (i=0;i<n;i++)
	{
		if(data[i] == 1)
			c++;
	}
	if(c%2==0)
		p=0;
	else
		p=1;
	if (p==flag)
		printf("Successful Transmission!!");
	else
		printf("Error in transmission!!!");
}
int main()
{
	int *data,n,i;
	printf("Enter the no of bits :- ");
	scanf("%d",&n);
	data = (int *)malloc(n*sizeof(int));
	printf("Enter the bit Stream :- ");
		for(i=0;i<n;i++)
		scanf("%d",&data[i]);
	sender(data,n);
}
