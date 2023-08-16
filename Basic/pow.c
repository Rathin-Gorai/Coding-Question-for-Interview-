// Program to calculate the power without using POW function.
#include<stdio.h>
int main()
{
    int num,pow,res=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the power: ");
    scanf("%d",&pow);
    for (int i = 0; i < pow; i++)
    {
        res=res*pow;
    }
    printf("Reasult: %d",res);
    
}