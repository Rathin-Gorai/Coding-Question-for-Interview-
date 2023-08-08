// Program to find an element from one dimensional array.
#include<stdio.h>
int main()
{
    int size,flag=0,i,num;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for ( i = 0; i < size; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element want to search: ");
    scanf("%d",&num);
    for( i=0;i<size;i++)
    {
        if(num==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Element found at %d position.",i+1);
    } 
    else
    {
        printf("Element not found! ");
    }
    
}