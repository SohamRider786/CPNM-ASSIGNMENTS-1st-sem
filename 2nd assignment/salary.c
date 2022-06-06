#include<stdio.h>
void main()
{
    int basic_salary;
    printf("enter the basic salary");
    scanf("%d",&basic_salary);
    printf("the gross salary is %f",(float)(basic_salary+0.6*basic_salary+0.15*basic_salary));

}