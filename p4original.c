#include<stdio.h>
int inputarraysize()
{
  int n;
  printf("enter array size:\n");
  scanf("%d",&n);
  return n;
}
void inputarray(int n,int a[n])
{
  for (int i=1;i<=n;i++)
  {
    printf("enter the values %d\n",i);
    scanf("%d",&a[i]);
  }
}
int _composite(int n)
{
int composite=0;
for(int i=2;i<=n/2;i++)
{
  if(n%i==0)
  {
    composite=1;
    break;
  }
}
return composite;
}
int sumcompositenumber(int n,int a[n])
{
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    if(_composite(a[i])==1)
    {
      sum+=a[i];
    }
  }
  return sum;
}
void output(int sum)
{
  printf("the sum of the composite numbers is %d",sum);
}
int main()
{
  int n;
  n=inputarraysize();
  int a[n];
  inputarray(n,a);
  int sum;
  sum=sumcompositenumber(n,a);
  output(sum);
  return 0;
}