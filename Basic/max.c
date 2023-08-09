// Write a program in C to find greatest among three integers.
#include<stdio.h>
int main()
{
    int a=20,b=22,c=25;
    if(a>b && a>c)
    {
        printf("A is greatest!");
    }
    else if (b>a && b>c)
    {
        printf("B is Greatest");
    } else
    {
        printf("C is Greatest !");
    }
    return 0;
}
