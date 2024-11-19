#include<stdio.h>
int main()
{
    int a,b,sum,sub,multi;
    float divide;
    a=20;
    b=2;
    sum=a+b;
    multi=a*b;
    sub=a-b;
    divide=a/b;
    printf("the number is %d and %d\n",a,b);
    printf("the sum is %d\n",sum);
    printf("the multiplication is %d\n",multi);
    printf("the substraction is %d\n",sub);
    printf("the division is %f\n",divide);
    return 0;
}
