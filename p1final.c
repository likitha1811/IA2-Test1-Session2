#include <stdio.h>
void input(float *base, float *height)
{
  printf("Enter length of base and height of triangle:\n");
  scanf("%f%f",base,height);
}
void find_area(float base , float height, float *area)
{
  *area = (base*height)/0.5 ;
}
void output(float base, float height, float area)
{
  printf("Area of Triangle is (%f*%f)/0.5 = %f\n ", area,base,height);
}
float main()
{
  float base,height, area=0;
  input(&height,&base);
  find_area(height,base,&area);
  output(base,height,area);
  return 0; 
}