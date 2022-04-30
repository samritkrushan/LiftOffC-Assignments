#include<stdio.h>
int evenodd(int n);
int rem;
int main()
{
	int n,r;
	printf("input number to be checked:   ");
	scanf("%d",&n);
	rem=n%2;
	r=evenodd(n);
	if(r==1)
        printf(" The number is odd %d \n",n);
    else
        printf(" The number is even %d \n",n);
    return 0;
}
int evenodd(int n)
{
	if(rem==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
