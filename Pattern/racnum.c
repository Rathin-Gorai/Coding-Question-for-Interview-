// Print a ractangle using numbers.
#include<stdio.h>
int main()
{
    int num,count=1;
    printf("Enter the value of number(2-10): ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(count<10)
            {
                printf("0");
            }
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }

}