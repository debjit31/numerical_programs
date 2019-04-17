#include<stdio.h>
#include<math.h>
float fx(float x, float y)
{
    return  (y-x);
}
int main()
{
    FILE *fp;
    fp = fopen("a.txt","w");
    float x_0,y_0,h,x_n;int c = 1;
    printf("Enter value of x0 and y0\n");
    scanf("%f%f",&x_0,&y_0);
    printf("Enter value of h and Xn \n");
    scanf("%f%f",&h,&x_n);
    float x1,y1,z;
    printf("Iteration\t\t");
    printf("X\t\t");
    printf("Y\t\t\n");
    while(x_0<x_n)
    {
        x1 = x_0+h;
        y1 = y_0 +h*fx(x_0,y_0);
        do{
            z=y1;
            y1 = y_0 + (h/2)*(fx(x_0,y_0)+fx(x1,y1));
        }while(fabs(z-y1)>0.0001);
        x_0 = x1;
        y_0 = y1;
        printf("%d\t\t",c);
        printf("%f\t\t%f\n",x_0,y_0);
	fprintf(fp,"%f\t\t%f\n",x_0,y_0);
        c++;
    }
fclose(fp);

   
   
}
