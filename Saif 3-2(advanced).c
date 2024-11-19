#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number: ");
    if(scanf("%d",&x)==0)
    {
        printf("Invalid number");
    }
    else
    {
    if(x<0)
    {
        printf("%d is negetive",x);
    }
    else if (x==0)
    {
        printf("%d is equal to zero",x);
    }
    else
    {
        printf("%d is positive",x);
    }
    }
}
