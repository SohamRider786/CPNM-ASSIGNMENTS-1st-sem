#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) x*x*x-2.5*x*x-2.46*x+3.96
#define df(x) 3*x*x-2.5*2*x-2.46
#define e 0.001
void newton_ralphson(float x0,int n,float r1,float r2)
{
    float f0,df0,f1,df1,x1,a;
    int i=0;
    a=x0;
    do
    {
       f0=f(a);
       df0=df(a);
       if(df0==0)
       {
           printf("mathematical error");
           break;
       }
       if(i<n)
       {
           x1=a-f0/df0;
           i++;
           a=x1;
           f1=f(a);
           df1=df(a);
       }
    }while(fabs(f1)>e);
    printf("the root using newton ralphson method within [%f,%f)is=%0.3f\n\n\n",r1,r2,x1);
}
int main()
{
    float x0,x1,root1,root2,root3;
    int n,no_of_root=0;
    float f0,f1;
    x0=-4.0;
    x1=-3.0;
    printf("enter the number of iterations(maximum)=");
    scanf("%d",&n);
    while(no_of_root<3)
    {
        f0=f(x0);
        f1=f(x1);
        if(f0*f1<0)
        {
            printf("the root %d exists between [%f,%f)\n",no_of_root+1,x0,x1);
            newton_ralphson(x1,n,x0,x1);
            no_of_root++;
            x0=x1;
            if(x1<4)
            x1=x1+1;
            if(no_of_root==2)
            x1=4.0;
        }
        else 
        {
            x1=x1+0.01;
        }
    }
    return 0;
}