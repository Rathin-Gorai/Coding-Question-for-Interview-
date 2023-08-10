// C Program to check given number is Perfect or not.
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("ENter the Number:");
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum == num)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfact ");
    }
}
