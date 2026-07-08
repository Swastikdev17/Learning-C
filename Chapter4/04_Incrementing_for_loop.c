#include <stdio.h>

int main()
{
    int n;
    printf("Please enter the value of n:\t");
    scanf("%d",&n);
    for (int i = 1/*initialization*/; i <= n;/*Condition to be checked*/ i++/*Increment or decrement*/)
    {
        printf("%d\n", i);// block to be executed if condition = true
    }
    return 0;
}// This is a program to print the first n natural numbers using for loop
    