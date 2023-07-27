// Find the factorial of a number
#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter the Number want to find the factorial : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        fact= fact*i;
    }
    printf("Factorial of the number: %d ",fact);
    return 0;
}