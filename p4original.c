#include<stdio.h>
int inputarraysize()
{
  int n;
  printf("enter array size:\n");
  scanf("%d",&n);
  return n;
}
void inputarray(int n,int a[])
{
  for (int i=0;i<n;i++)
  {
    printf("enter the values");
    scanf("%d",&a[i]);
  }
}
int composite(int n)
{
int x;
for(int i=2;i<=n;i++)
{
  if(n%i==0)
  {
    x +=1;
  }
}
return x;
}
int sumcompositenumber(int n,int a[])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    if(composite(a[i]>2))
    {
      sum=sum+a[i];
    }
  }
  return sum;
}
void output(int sum)
{
  printf("the sum of the composite numbers mentioned is %d",sum);
}
int main()
{
  int n,sum;
  n=inputarraysize();
  int a[n];
  inputarray(n,a);
  sum=ncomposite(n,a);
  output(sum);
  return 0;
}