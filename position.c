#include<stdio.h>
int main()
{
    int num,num1,num2,num3;
    num=953;
    num1=num%10;
    num2=(num/10)%10;
    num3=(num/100)%10;
    printf("The 1st position of %d is %d\n",num,num3);
    printf("The 2nd position of %d is %d\n",num,num2);
    printf("The 3rd position of %d is %d\n",num,num1);
    return 0;
}
