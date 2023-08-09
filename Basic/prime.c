// C Program to print Prime Number in a given range
#include <stdio.h>
int main()
{
    int low, high,flag;
    printf("Enter the Lower limit: ");
    scanf("%d", &low);
    printf("Enter the Upper limit: ");
    scanf("%d", &high);
    printf("Prime Number are: ");
    for (int i = low; i <= high; i++)
    {
        flag=0;
        for (int j = 2; j <= (i / 2); j++)
        {
            if (i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }
}