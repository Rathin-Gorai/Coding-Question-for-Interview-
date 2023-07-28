// Write a C program that prints the perimeter of a rectangle to take its height and width as input.
#include<stdio.h>
int main()
{
    float b,h,perimeter;
    printf("Width: ");
    scanf("%f",&b);
    printf("Height: ");
    scanf("%f",&h);
    perimeter= 2*(b+h);
    printf("Peremeter = %.2f",perimeter);
}