// C Program to calculate factorial using recursion
#include<stdio.h>

int fact(int num)
{
    if(num==1)
    {
        return 1;
    }
    else
    {
        return num* fact(num-1);
    }
} 

int main()
{
    int num,factorial;
    printf("Enter the number :");
    scanf("%d",&num);
    factorial= fact(num);
    printf("factorial = %d",factorial);
}