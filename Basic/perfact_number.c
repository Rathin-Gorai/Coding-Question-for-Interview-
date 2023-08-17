// Program to check if the given number is Perfect number
#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }
    if (num == sum)
    {
        printf("Number is perfact number.");
    }
    else
    {
        printf("Number is not perfact.");
    }
    return 0;
}