// Write a program in C to find the maximum and minimum element in an array.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        printf("Element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(int i=0;i<num;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("Maximum= %d \nMinimum= %d",max,min);


}