// C program to calculate LCM of given two numbers.
#include<stdio.h>
int main()
{
    int num1, num2 , max;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the Second number: ");
    scanf("%d",&num2);
    if(num1>num2)
    {
        max=num1;
    }
    else
    {
        max=num2;
    }
    while (1)
    {
        if(max%num1==0 && max%num2==0)
        {
            printf("LCM= %d",max);
            break;
        }
        max+=1;
    }
    
}