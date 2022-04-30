#include<stdio.h>
int findGCD(int n1,int n2);
int main()
{
  int n1,n2,gcd;
  printf(" enter two number to find GCD ");
  scanf("%d%d",&n1,&n2);
  gcd = findGCD(n1,n2);
  printf("\n The GCD of %d and %d is: %d",n1,n2,gcd);
  return 0;
}

int findGCD(int a,int b)
{
     while(a!=b)
     {
          if(a>b)
              return findGCD(a-b,b);
          else
             return findGCD(a,b-a);
     }
     return a;
}
