// 6. Write a program to reverse a string.
// void input_string(char a);
// int str_reverse(char a);
// void output(char a,char reversea);
// input:
// hello
// output:
// olleh

#include <stdio.h>
#include <string.h>

void input_string(char *a)
{
    printf("Enter a string:\n");
    scanf("%s",a);
}

int str_reverse(char a[20])
{
    int c=strlen(a);
    char one;
    int i;
    for (i=0;i<c/2;i++)
    {
        one=a[i];
        a[i]=a[c-1-i];
        a[c-1-i]=one;
    }
}
void output(char a[20])
{
    printf("reverse string is: %s",a);
}

int main()
{   
    char a[20];
    input_string(a);
    str_reverse(a);
    output(a);
}