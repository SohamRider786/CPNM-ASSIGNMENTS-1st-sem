#include<stdio.h>
#include<math.h>
void main()
{
    int n1,n2,remainder;
    printf("enter the two number");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        remainder=n1%n2;
        printf("%d/%d\n",remainder,n2);
        printf("%f",(float)n1/n2);
    }
    else
    {
        
        remainder=n2%n1;
        printf("%d/%d\n",remainder,n1);
        printf("%f",(float)(n2/n1)); 
    }
}
