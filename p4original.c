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

void input_array(int n, int a[n])
{   int i;
    for(i=0;i<n;i++)
    {
        printf("Enter a number:\n");
        scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{  
    int i,c;
    int sum=0;
    for(i=0;i<n;i++)
    {   
        int d=a[i];
        int r=0;
        for(c=1;i<=n;i++)
        {
            if(d%c==0)
            r=r+1;
        }
        if(r>2)
        {
            sum=sum+a[i];
        }
    }
    printf("%d",sum);
    return sum;
}

int main()
{
    int n,a[n];
    n=input_array_size();
    input_array(n,a);
    sum_composite_numbers(n,a);
}