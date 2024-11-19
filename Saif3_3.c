/*Write a C program to check whether a given number is odd or even.*/
#include <stdio.h>
void main()
{
    int x;
    float rem;
    printf("Enter a number  ");
    scanf("%d",&x);
    rem=x%2;
    if(rem==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}
