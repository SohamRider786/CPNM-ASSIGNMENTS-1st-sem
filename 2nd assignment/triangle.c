#include<stdio.h>
int main()
{
    int s;
    printf("enter the choice");
    scanf("%d",&s);
    int a,b,c;
    switch (s)
    {
        case 1:
        printf("enter the three angles ");
        scanf("%d%d%d",&a,&b,&c);        
        if((a+b+c==180)&&(a>0)&&(b>0)&&(c>0))
        printf("valid triangle");
        break;
        case 2:
        printf("enter the three sides ");
        scanf("%d%d%d",&a,&b,&c);
        if((a+b>c||a+c>b||b+c>a)&&(a>0)&&(b>0)&&(c>0))
        printf("valid triangle");
        break;
        default:
        printf("invalid choice");
        return 0;
    }
}