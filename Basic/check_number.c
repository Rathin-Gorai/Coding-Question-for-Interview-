// Program to check whether a given number is positive or negative.
#include<stdio.h>
int  main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(num==0)
    {
        printf("Zero is nither Negative nor Positive! ");
    }
    else if (num>0)
    {
        printf("Positive number!");
    }
    else
    {
        printf("Negative Number!");
    }
    return 0;
}