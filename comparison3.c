
#include<stdio.h>
int input(void)
{
  int a;
  printf("enter the numbers");
  scanf("%d",&a);
    return a;
    }
int compare(int a,int b,int c)
{
  int d;
  if (a>b&&a>c)
  { 
    d=a;
    }
  else if(b>a&&b>c)
  {
    d=b;
  }
  else if(c>a&&c>b)
  {
    d=c;
  }
  return d;
}
void output(d)
{
  printf("the largest is %d\n",d);
}
int main(void)
{
  int a,b,c,d;
  a=input();
  b=input();
  c=input();
  d=compare(a,b,c);
  output(d);
}