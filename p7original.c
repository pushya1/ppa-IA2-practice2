// 7. Write a program to find the area of a triangle
// struct _triangle
// {
// float base,altitude,area;
// }; <brtypedef _triangle Triangle
// Triangle input_triangle();
// void find_area(Traingle *t);
// void output(Triangle t);
// input:
// 2 3
// output:
// The area of triangle wwith base = 2.000000 and altitude = 3.000000 is 3.000000
#include <stdio.h>
typedef struct _triangle
{
    float base;
    float altitude;
    float area;
}Triangle;

Triangle input_triangle()
{   
    Triangle t;
    printf("Enter the base of Triangle:\n");
    scanf("%f",&t.base);
    printf("Enter the altitude of Triangle:\n");
    scanf("%f",&t.altitude);
    return t;
}
void find_area(Triangle *t)
{
    t->area=0.5*t->base*t->altitude;
}
void output(Triangle t)
{
    printf("The area of triangle wwith base = %.2f and altitude = %.2f is %.2f \n",t.base,t.altitude,t.area);
}

int main()
{
    Triangle t;
    t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
}