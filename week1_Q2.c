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
    if(b>a)
    {
        printf("the maximum number is  :  %d" ,b);
    }
    if(a==b)
    {
        printf("the values entered are same  %d" ,a);
    }
    return 0;
}
