#include<stdio.h>
#define pi 3.1416
int main()
{
    float x;
    printf("Enter radius of the circle:  ");
    if(scanf("%f",&x)==1)
    {
    if(x<=0)
    {
        printf("Program terminated due to Negetive or Zero radius");
        return 0;
    }
    else
    {
       double area=pi*x*x;
       printf("The area is %lf\n",area);
       return 0;
    }
    }
    else
    {
        printf("Radius Contains Illegal Characters");
        return 0;
    }
}