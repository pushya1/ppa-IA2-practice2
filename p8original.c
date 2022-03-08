// 8. Write a program to find the triangle with smallest area in n given triangles.
// struct _triangle
// {
// float base,altitude,area;
// };
// typedef _triangle Triangle
// int input_n();
// Triangle input_triangle();
// void input_n_triangles(int n, triangle t[n]);
// void find_area(Triangle *t);
// void find_areas_n(int n, Triangle t[n]);
// Triangle find_smallest_triangle(int n, Triangle t[n]);

// void output(int n, Triangle t[n], Triangle smallest);
// void
// input:
// 2 3
// 4 6
// the smallest of triangles with base and height
// 2,3 and
// 4,6
// is
// triangle with base 2.000000, 3.000000 is 3.000000
// The area of triangle wwith base = 2.000000 and altitude = 3.000000 is 3.000000

#include <stdio.h>

typedef struct _triangle
{
    float base;
    float altitude;
    float area;
}Triangle;
int input_n()
{
    int n;
    printf("No of triangles you want to enter:\n ");
    scanf("%d",&n);
    return n;
}
Triangle input_triangle()
{
    Triangle a;
    printf("Enter the base of triangle:\n");
    scanf("%f",&a.base);
    printf("Enter the altitude of triangle:\n");
    scanf("%f",&a.altitude);
    return a;
}
void input_n_triangles(int n, Triangle t[n])
{   
    int i;
    for(i=0;i<n;i++)
    {
        t[i]=input_triangle();
    }
}

void find_area(Triangle *t)
{
    t->area=0.5*t->base*t->altitude;
}
void find_areas_n(int n,Triangle t[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle s_tri;
  float s_area = t[0].area;
  for(int i = 0; i < n; i++){
    if(t[i].area <= s_area){
      s_area = t[i].area;
      s_tri = t[i];
    }
  }
  return s_tri;
}
void output(Triangle s_tri)
{
    printf("Triangle with base %.2f , altitude %.2f and area = %.2f is smallest of all triangles",s_tri.base,s_tri.altitude,s_tri.area);
}
int main()
{   
    int n;
    n=input_n();
    Triangle t[n];
    input_n_triangles(n,t);
    find_areas_n(n,t);
    Triangle s_tri;
    s_tri=find_smallest_triangle(n,t);
    output(s_tri);
    return 0;
}