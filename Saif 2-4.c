#include<stdio.h>
int main()
{
  double  height,width,area;
  printf("input the height:\n");
  scanf("%lf",&height);
  printf("input width: \n");
  scanf("%lf",&width);
  area=height*width;
  printf("the area is: %lf\n",area);
  return 0;
}
