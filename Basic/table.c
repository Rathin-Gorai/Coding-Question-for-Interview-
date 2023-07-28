// Program in C to display the multiplication table of a given integer.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number wants to print table=");
    scanf("%d",&num);
    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}