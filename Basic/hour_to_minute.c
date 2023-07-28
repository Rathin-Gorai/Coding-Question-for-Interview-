// Program to convert Hour to Minutes
#include<stdio.h>
int main()
{
    int hour=0,min=0,output;
    printf("Input Hours: ");
    scanf("%d",&hour);
    printf("Input Minutes: ");
    scanf("%d",&min);
    output= min+ (60*hour);
    printf("Total Minutes: %d",output);
    return 0;
}