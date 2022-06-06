#include<stdio.h>
#include<math.h>
void main()
{
    int x,y,r,x1,y1;
    double resultant;
    printf("enter the center of the circle ");
    scanf("%d%d",&x,&y);
    printf("enter the radius");
    scanf("%d",&r);
    printf("enter the point you want to check");
    scanf("%d%d",&x1,&y1);
    resultant = pow(x-x1,2)+pow(y-y1,2)-r*r;
    if(resultant==0)
    printf("point lies on the circle");
    else if(resultant>0)
    printf("the point lies outside the circle");
    else
    printf("point lies inside the circle");
}