// 1. Write a program to find the area of a triangle
#include <stdio.h>
void input(float *base,float *height)
{
  printf("Enter the base of the triangle:\t");
  scanf("%f",base);
  printf("Enter the height of the triangle:\t");
  scanf("%f",height);
}
void find_area(float *base,float *height,float*area)
{
    *area=0.5**base**height;
}
void output(float *base, float *height, float *area)
{
    printf("area of triangle with base %.2f and height %.2f is %.2f\n",*base,*height,*area);
}
int main()
{
    float a,b,c;
    input(&a,&b);
    find_area(&a,&b,&c);
    output(&a,&b,&c);
    return 0;
}
