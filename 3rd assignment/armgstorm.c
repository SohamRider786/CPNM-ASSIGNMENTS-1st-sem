#include<stdio.h>
#include<math.h>
int main()
{
    int d;
    printf("the armstrong numbers between 1 and 500 are as follows :-\n");
    for(int i=1;i<=500;i++)
    {
        int sum=0;
        for(int j=i;j>0;j=j/10)
        {
            d=j%10;
            sum=sum+d*d*d;
        }
        if(sum==i)
        printf("%d\t",i);
    }
    return 0;
}0