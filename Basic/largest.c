// Write a C program to find the largest of three numbers.  
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three number one by one: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is largest! ",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is largest!",b);
    }
    else
    {
        printf("%d is largest!",c);
    }
    
}