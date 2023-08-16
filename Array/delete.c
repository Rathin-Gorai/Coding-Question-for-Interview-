// Program to delete an element from one dimensional array.
#include<stdio.h>
int main()
{
    int num,del,flag=0;
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
    for(int i =0; i<num-1;i++)
    {
        if(arr[i]==del)
        {
            flag=1;
        }
        if(flag==1)
        {
            arr[i]=arr[i+1];
        }
    }
    printf("Elements remaining: ");
    for (int i = 0; i < num-1; i++)
    {       
        printf("%d ",arr[i]);
    }
    
    
}
