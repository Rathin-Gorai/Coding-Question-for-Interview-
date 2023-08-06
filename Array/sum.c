// Write a program in C to find the sum of all elements of the array.
#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i =0; i<a;i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum= %d",sum);
    return 0;
}