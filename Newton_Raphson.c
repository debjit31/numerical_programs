#include<stdio.h>
#include<math.h>
void newton_raph(float,float);
float fx(float x)
{
	return pow(x,3) - 3*x + 1.06;
}
float dfx(float x)
{
	return 3*pow(x,2) - 3;
}
int main()
{
	float a,b;
	printf("Enter a number :- ");
	scanf("%f",&a);
	printf("Enter a number :- ");
	scanf("%f",&b);
	newton_raph(a,b);
}
void newton_raph(float a,float b)
{
	float c;
	int i =0 ;
	if(fx(a)*fx(b)>0)
	{
		printf("Wrong Range selected!!!!\n");
		main();
	}	
	else
	{
		printf("N\t\t");       
		printf("Xn\t\t\t");
		printf("Xn+1\t\t\t");
		printf("f(Xn+1)\n");
		c = (a+b) / 2;		
		do{
			    printf("%d\t\t",i);
			    i++;
			    printf("%f\t\t",c);           			 
			    c= c - (fx(c)/dfx(c));
			    printf("%f\t\t",c);
          		    printf("%f\n",fx(c));
		  }while(fabs(fx(c))>0.0001);
	}
}
