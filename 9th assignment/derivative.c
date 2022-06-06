#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.14
#define f(x) sin(x)
#define df(x) cos(x)
float forward_difference(float x0,float dx)
{
    float dfx;
    dfx=(f(x0+dx)-f(x0))/dx;
    return dfx;
}
float backward_difference(float x0,float dx)
{
    float dfx;
    dfx=(f(x0)-f(x0-dx))/dx;
    return dfx;
}
float centre_difference(float x0,float dx)
{
    float dfx;
    dfx=(f(x0+dx)-f(x0-dx))/(2*dx);
    return dfx;
}
void percentage_error(float x0,float dfx)
{
    float f1x;
    f1x=df(x0);
    float error_percent;
    error_percent=(fabs((dfx-f1x)/f1x)*100);
    printf("the relative percentage error is=%f",error_percent);
}
int main()
{
    float x0,f1,f0,dx,dfx;
    int choice;
    printf("enter the value of x(in degrees)=");
    scanf("%f",&x0);
    x0=x0*PI/180;
    printf("1.forward difference\n2.backward diffrence\n3.central difference\nenter the choice=");
    scanf("%d",&choice);
    printf("enter the value of dx(in degrees)=");
    fflush(stdin);
    scanf("%f",&dx);
    dx=dx*PI/180;
    switch(choice)
    {
        case 1:
        dfx=forward_difference(x0,dx);
        printf("the value is=%f\n",dfx);
        percentage_error(x0,dfx);
        break;
        case 2:
        dfx=backward_difference(x0,dx);
        printf("the value is=%f\n",dfx);
        percentage_error(x0,dfx);
        break;
        case 3:
        dfx=centre_difference(x0,dx);
        printf("the value is=%f\n",dfx);
        percentage_error(x0,dfx);
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}