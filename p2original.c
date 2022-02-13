#include<stdio.h>
int input_side()
{
  int n;
  printf("enter the length sides of triangle\n");
  scanf("%d",&n);
  return n;
}
 int check_scalene(int a, int b, int c)
 {
   if(a==b||b==c||c==a)
   {
   return 1;
   }
   else
   {
   return 0;
   }
  }
  void output(int a,int b,int c,int result)
  {
    if(a!=b && b!=c &&c!=a)
   { printf("the triangle is scalene\n");}
   else
   {
    printf("triangle is not scalene\n");
   }

  }
  int main()
  {
    int a,b,c,x;
    a=input_side();
    b=input_side();
    c=input_side();
    x=check_scalene(a,b,c);
    output(a,b,c,x);
    return 0;
  }