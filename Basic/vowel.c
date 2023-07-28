// Write a C program to check whether an alphabet is a vowel or consonant.  
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the Letter: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("Letter is vowel !");
    }
    else
    {
        printf("Letter is consonents!");
    }
}