#include<stdio.h>
int main()
{
    double radius,circ,area,pi;
    radius=7;
    pi=3.1416;
    area=pi*radius*radius;
    circ=2*pi*radius;
    printf("the radius is: %lf\n",radius);
    printf("the area of the circle is: %lf\n",area);
    printf("the circumference of circle is: %lf\n",circ);
    return 0;
}
