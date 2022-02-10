#include <stdio.h>

int input_number()
{
  int n;
  printf("Enter a number:\t");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{ 
    int r=0;
  for(int i=1;i<=n;++i)
  {
    if(n%i==0)
      r=r+1;
  }
  return r;
  
}
void output(int n,int r)
{
  if(r==2)
  {
    printf("%d is not a composite number\n",n);
  }
  else
  printf("%d is  a composite number\n",n);
}
int main(){
  int n,r;
  n=input_number();
  r=is_composite(n);
  output(n,r);
  return 0;
}