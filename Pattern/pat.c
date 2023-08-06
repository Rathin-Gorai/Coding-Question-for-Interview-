#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of n(n>10): ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(i==0||j==0||i==num-1||j==num-1||i==num/2||j==num/2||i==j||i+j==num-1||i+j==num/2||i-j==num/2||i+j==(num/2)+(num-1)||j-i==num/2)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}