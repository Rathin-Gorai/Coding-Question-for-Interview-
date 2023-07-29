// Write a program in C to merge two arrays of same size sorted in descending order.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    int arr[num],arr2[num],all=num*2,mar[all];
    printf("Enter the first array elemnts: \n");
    for(int i=0;i<num;i++)
    {
        printf("Elements: %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the second array elemnts: \n");
    for(int i =0;i<num;i++)
    {
        printf("Element %d :",i+1);
        scanf("%d",&arr2[i]);
    }
    // marge two array
    for( int i =0;i<num;i++)
    {
        mar[i]=arr[i];
    }
    for (int i = num,j=0; i < all; i++)
    {
        mar[i]=arr2[j];
        j++;
    }

    // shorting in decending order 
    for(int i;i<all;i++)
    {
        for(int j=i+1;j<all;j++)
        {
            if(mar[i]<mar[j])
            {
                mar[i]=mar[i]+mar[j];
                mar[j]=mar[i]-mar[j];
                mar[i]=mar[i]-mar[j];
            }
        }
    }

    for(int i =0;i<all;i++)
    {
        printf("%d ",mar[i]);
    }


    return 0;
}
