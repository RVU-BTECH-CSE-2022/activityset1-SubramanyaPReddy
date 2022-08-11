#include<stdio.h>
int input(void)
{
  int a;
  printf("enter the numbers");
  scanf("%d",&a);
  return a;
}
int compare(int a,int b)
{
  int c;
  if (a==b)
  {
  c=a;
  }
  else if(a<b)
  {
  c=b;
  }
  else 
  {
  c=a;
  }
  return c;
}
void output(c)
{
  printf("the largest is %d",c);
  }
  int main()
  {
    int a,b,c;
    a = input();
    b = input();
    c = compare(a,b);
    output(c);
}