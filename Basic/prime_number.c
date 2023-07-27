// Program to check if the given number is a Prime number

#include<stdio.h>
int main()
{
    int num,flag=0;
    printf("Write the number you wants to check: ");
    scanf("%d",&num);
    for(int i =2;i<=num/2;i++)
    {
        if (num%i==0)
        {
            flag=1;
            break;
        }
    }
    if(num==1)
    {
        printf("Numer is Nither prime not Composite !");
    }
    else if(flag==1)
    {
        printf("Not a Prime Number !");
    }
    else
    {
        printf("Prime Numer !");
    }
    return 0;
}