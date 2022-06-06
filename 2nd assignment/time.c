#include<stdio.h>
int main()
{
    int t,hr,min,sec,remainder;
    printf("enter the seconds");
    scanf("%d",&t);
    if(t>3600)
    {
        hr=t/3600;
        t=t%3600;
    }
    if(t>60)
    {
        min=t/60;
        t=t%60;
    }
    if(t<60)
    sec=t;
    printf("%d hours %d minutes %d seconds",hr,min,sec);
    return 0;
}