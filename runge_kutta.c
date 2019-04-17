#include<stdio.h>
float fx(float x,float y) 
{
    return (y-x*x+1);
}
int main()
{
    float x0,y0,h,xn,k1,k2,k3,k4,k,x1,y1;int c = 1;
    printf("Enter the value of x0 and y0 :- ");
    scanf("%f%f",&x0,&y0);
    printf("Enter the value of h and xn :- ");
    scanf("%f%f",&h,&xn);
    printf("Iteration\t\t");
    printf("X\t\t");
    printf("Y\n");
    while(x0<xn)
    {
        k1 = h*fx(x0,y0);
        k2 = h*fx(x0+(h/2.0),y0+(k1/2.0));
        k3 = h*fx(x0+(h/2.0), y0+(k2/2.0));
        k4 = h*fx(x0+h, y0+ k3);
        k = (1.0/6.0)*(k1+2.0*k2+2.0*k3+k4);
        y1 = y0 + k;
        x1 = x0 + h ;
        x0 = x1;
        y0 = y1;
        printf("%d\t\t",c);
        printf("%f\t\t%f\n",x0,y0);
        c++;
    }
    
}

