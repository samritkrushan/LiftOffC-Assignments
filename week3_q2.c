#include<stdio.h>
int Prime(int n1);
int i;
int main()
{
    int n1,p;
    printf(" Input any positive number : ");
    scanf("%d",&n1);
    i = n1/2;
    p=Prime(n1);
    if(p==1)
        printf(" The number is prime %d \n",n1);
    else
        printf(" The number is not prime %d \n",n1);
    return 0;
}
int Prime(int n1)
{
    if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }     
    else
       {
        i = i -1; 
        Prime(n1);
      }
}
