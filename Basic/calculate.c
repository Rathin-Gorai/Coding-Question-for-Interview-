// Program in C to show the sum, subtract, multiplication of two number using function.
#include <stdio.h>
int sum(int a, int b)
{
    return (a+b);
}
int sub(int a, int b)
{
    return (a-b);
}
int mul(int a, int b)
{
    return (a*b);
}
int div(int a, int b)
{
    return (a/b);
}

int main()
{
    int a, b;
    char c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter the operation (+,-,*,/) :");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
        printf("Sum of two numbers %d", sum(a, b));
        break;
    case '-':
        printf("Subtraction of two numbers %d", sub(a, b));
        break;
    case '*':
        printf("Multiplication of two numbers %d", mul(a, b));
        break;
    case '/':
        printf("Division of two numbers %d", div(a, b));
        break;

    default:
        printf("Wrong Input !");
        break;
    }
}
