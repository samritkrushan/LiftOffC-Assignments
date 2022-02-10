#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the number to be checked");
    scanf("%d" , &a);
    if(a%2==0)
    {
        b=1;
    }
    else
    {
        b=2;
    }
    switch(b)
    {
    case 1:
        printf("the number is even  %d" , a);
        break;
    case 2:
        printf("the number is odd   %d" , a);
        break;
    }   

    return 0;        
}