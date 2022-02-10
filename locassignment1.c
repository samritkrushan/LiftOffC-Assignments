#include<stdio.h>
#include<stdlib.h>
int main()
{
    int regd;
    char name[50],branch[50],hobbies[100];
    printf("Enter your name: ");
    gets( name);
    printf("\n Enter your branch : ");
    gets(branch);
    printf("\n Enter your hobbies: ");
    gets(hobbies);
    printf("\n Enter regd. no (last 3 digits) : ");
    scanf("%d", &regd);
    printf("your name is :  %s ",name);
    printf("your registration number is :   %d ",regd );
    printf(" your branch is :  %s  ",branch);
    printf("your hobbies are  : %s  ",hobbies);

    return 0;
} 
    