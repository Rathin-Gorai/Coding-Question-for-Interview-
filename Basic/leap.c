// .program to check leap year
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year you want to check: ");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || (year%400==0))
    {
        printf("Leap Year");
    } 
    else
    {
        printf("Not a Leap Year");
    }
}