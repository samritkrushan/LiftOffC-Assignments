#include<stdio.h>

int swap(int *,int *);
int main()
{

    int n1,n2;	   
    printf("enter numbers to be swapped ");
    scanf("%d%d",&n1,&n2);	
    printf("Before swapping: n1 = %d, n2 = %d ",n1,n2);
	swap(&n1,&n2);
    printf("\nAfter swapping: n1 = %d, n2 = %d \n\n",n1,n2);
    return 0;
}
int swap(int *p,int *q)
{

    int t;
    t=*p;
    *p=*q;  
    *q=t;  
}
