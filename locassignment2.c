#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a value for a and b  : ");
    scanf("%d %d" , &a , &b);
    if(a>b)
    {
        printf("the maximum number is  :  %d" ,a);
    }
    else
    {
        printf("the maximum number is  :  %d" ,b);
    }
    return 0;
}