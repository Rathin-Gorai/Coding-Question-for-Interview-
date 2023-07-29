// n number of values in an array and display it in reverse order
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=num-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}