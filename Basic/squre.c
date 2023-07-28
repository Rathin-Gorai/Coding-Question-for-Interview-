// C to find the square of any number using the function.
#include<stdio.h>

int squre(int a)
{
    return a*a;
}
void main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    num=squre(num);
    printf("Output: %d",num);
}