#include<stdio.h>
#include<math.h>
int dec_to_bin(int n)
{
    if(n==1)
    return 1;
    else
    return(n%2+dec_to_bin(n/2)*10);
}
int sum_of_digits(int n)
{
    if(n==0)
    return 0;
    else
    return (n%10+sum_of_digits(n/10));
}
int main ()
{
    int n;
    char choice;
    printf("enter the number=");
    scanf("%d",&n);
    fflush(stdin);
    printf("enter the choice=");
    scanf("%c",&choice);
    fflush(stdin); 
    switch (choice)
    {
    case 'a':
    printf("the binary equivalent of the number is=%d",dec_to_bin(n));
    break;
    case 'b':
    printf("the sum of digits is %d",sum_of_digits(n));
    break;
    default:
    printf("invalid choice");
    break;
    }
    return 0;
} 