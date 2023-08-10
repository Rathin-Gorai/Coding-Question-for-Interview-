// Program to delete an element from one dimensional array.
#include<stdio.h>
int main()
{
    int num,del;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number want to delete: ");
    scanf("%d",&del);
    
    
}
