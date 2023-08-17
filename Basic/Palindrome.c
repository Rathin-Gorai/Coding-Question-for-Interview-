// Program to check if the given number is Palindrome
#include<stdio.h>
int main()
{
    int num,rev=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    int temp=num;
    while (temp!=0)
    {
        rev=rev*10 + temp%10;
        temp=temp/10;
    }
    if( num == rev)
    {
        printf("Number is Palindrome. ");
    } 
    else
    {
        printf("Number is not Palinrome.");
    }
    return 0;
    
    
}