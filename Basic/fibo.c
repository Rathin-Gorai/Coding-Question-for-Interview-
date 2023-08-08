// Write a program in C to print the Fibonacci series using iteration.
#include<stdio.h>
int main()
{
    int size,fib,first=0,second=1;
    printf("Enter the length of the series: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        if(i<=1)
        {
            fib=i;
        } 
        else
        {
            fib=first+second;
            first=second;
            second=fib;

        }
        printf("%d ",fib);
    }
    return 0;
}