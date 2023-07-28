// C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
#include<stdio.h>
int main()
{
    int age;
    printf("Enter the Age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Eligible to vote.");
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}