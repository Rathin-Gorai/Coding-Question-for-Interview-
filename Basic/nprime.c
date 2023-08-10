//  C program to print first n Prime Number.
#include <stdio.h>
int main()
{
    int num, flag = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The numbers are: ");
    for (int i = 2; i <= num; i++)
    {
        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
        }
        flag = 0;
    }
}