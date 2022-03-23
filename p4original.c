// 4. Write a program to find Sum of composite number in an array of numbers different containing numbers entered by the user.
// int input_array_size();
// void input_array(int n, int a[n]);
// int sum_composite_numbers(int n, int a[n]);
// void out_put(int sum);
// input:
// 1 2 7 8 12
// output:
// 20
#include<stdio.h>

int input_array_size()
{
    int n;
    printf("how many numbers you want to enter:\n");
    scanf("%d",&n);
    return n;
}

int  input_array(int n, int a[n])
{   int i;
    for(i=0;i<n;i++)
    {
        printf("Enter a number:\n");
        scanf("%d",&a[i]);
    }
    return a[n];
}
int sum_composite_numbers(int n, int a[n])
{
    int i;
    int sum=0;
    for(i=0;i<n;i++)
    {
        int d=a[i];
        int r=0;
        int c;
        for(c=1;c<=a[i];c++)
        {
            if(d%c==0)
            r++;
        }
        if(r>2)
        {
            sum=sum+a[i];
        }
    }
    return sum;
}
void output(int sum)
{
    printf("sum of the composite numbers is %d\n",sum);
}
int main()
{
    int n;
    n=input_array_size();
    int a[n];
    a[n]=input_array(n,a);
    int sum=sum_composite_numbers(n,a);
    output(sum);
}
