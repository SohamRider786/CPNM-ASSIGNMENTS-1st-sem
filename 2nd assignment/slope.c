#include<stdio.h>
void main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("enter the 1st coordinate ");
    scanf("%d%d",&x1,&y1);
    fflush(stdin);
    printf("enter the 2nd coordinate ");
    scanf("%d%d",&x2,&y2);
    fflush(stdin);
    printf("enter the 3rd coordinate ");
    scanf("%d%d",&x3,&y3);
    if((float)((y2-y1)/(x2-x1))==(float)((y3-y2)/(x3-x2))||(float)((y2-y1)/(x2-x1))==-(float)((y3-y2)/(x3-x2)))
    printf("they are in a straight line");
    else
    printf("they are not in a straight line");
}