// 5. Write a program to find gcd (hcf) of two numbers.
// int input();
// int gcd(int a, int b);
// void output(int a, int b, int gcd); input: 12 16 output 4

#include <stdio.h>

int input()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    return n;
}

int hcf(int a, int b)
{   
    int i,gcd;
 for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
        gcd = i;
    }
    return gcd;
}

void output(int a,int b,int gcd)
{
    printf("gcd of %d and %d is %d",a,b,gcd);
}
int main()
{
    int a,b,gcd;
    a=input();
    b=input();
    gcd=hcf(a,b);
    output(a,b,gcd);
    return 0;
}