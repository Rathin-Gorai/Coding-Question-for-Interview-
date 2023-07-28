// Write a program that converts Centigrade to Fahrenheit.
#include<stdio.h>
int main()
{
    float centigrade,fahrenheit;
    printf("Enter the temprature in Centgrade: ");
    scanf("%f",&centigrade);
    fahrenheit=(centigrade*9/5)+32;
    printf("Theprature in  Fahrenheit: %.2f",fahrenheit);
}