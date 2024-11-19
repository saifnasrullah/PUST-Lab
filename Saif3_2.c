//Write a C program to check whether a number is negative, positive or zero
#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x<0)
    {
        printf("The number is negetive");
    }
    else if (x==0)
    {
        printf("The number is equal to zero");
    }
    else
    {
        printf("The number is positive");
    }
}