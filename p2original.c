#include <stdio.h>

int input_side()
{
    int side;
    printf("Enter a side of triangle:\t");
    scanf("%d",&side);
    return side;
    
}

int check_scalene(int a,int b,int c)
{   
    int isscalene;
    if(a!=b&&b!=c&&c!=a)
    {
       isscalene=1;
    }else
    {
        isscalene=0;
    }
    return isscalene;
}
void output(int a,int b,int c, int isscalene)
{
    if (isscalene==0)
    {
        printf("triangle is not scalen");
    }
    else
        printf("triangle is scalen");
}


int main()
{
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}