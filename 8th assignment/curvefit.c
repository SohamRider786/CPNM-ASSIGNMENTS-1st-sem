#include<math.h>
#include<stdlib.h>
#include<stdio.h>
void input(float f[10][2],int n)
{
    printf("enter the values of x and f(x) respectively:-\n");
    for(int i=0;i<n;i++)
    {
        printf("x%d=",i+1);
        scanf("%f",&f[i][0]);
        printf("f(x%d)=",i+1);
        scanf("%f",&f[i][1]);
    }
}
void print(float f[10][2],int n)
{
    printf("the given data are as follows:-\n");
    printf("x\tf(x)\n");
    for(int i=0;i<n;i++)
    {
        printf("%f\t%f\n",f[i][0],f[i][1]);
    }
}
void curve_fit(float f[10][2],int n)
{
    float sum_x=0,sum_x2=0,sum_xy=0,sum_y=0,a,b;
    for(int i=0;i<n;i++)
    {
        sum_x+=f[i][0];
        sum_x2+=pow(f[i][0],2);
        sum_y+=f[i][1];
        sum_xy+=f[i][0]*f[i][1];
    }
    b=(n*sum_xy-sum_x*sum_y)/(n*sum_x2-sum_x*sum_x);
    a=(sum_y - b*sum_x)/n;
    printf("the equation is :-y=%0.2f+%0.2fx",a,b);
}
int main()
{
    int n;
    printf("enter the number of entries=");
    scanf("%d",&n);
    float f[10][2];
    input(f,n);
    print(f,n);
    curve_fit(f,n);
    return 0;
}