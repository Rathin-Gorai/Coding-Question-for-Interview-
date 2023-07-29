// program in C to copy the elements of one array into another array
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    int arr[num],arr2[num];
    for(int i =0; i<num;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0;i<num;i++)
    {
        arr2[i]=arr[i];
    }
    printf("Copied element from first array are: ");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
    
}