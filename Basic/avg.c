// C Program to find the Average of numbers with explanations
#include<stdio.h>
int main()
{
    int num,sum=0,inp;
    printf("Enter totals number: ");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",&inp);
        sum= sum+inp;
    }
    num=sum/num;
    printf("Average = %d",num);
    
}